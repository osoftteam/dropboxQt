#pragma once

#include <list>
#include <memory>
#include <functional>
#include <QString>
#include <QDebug>
#include <QDateTime>
#include <QVariant>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QNetworkReply>
#include "ApiException.h"

namespace dropboxQt {
	bool loadJsonFromFile(QString path, QJsonObject& js);
	bool storeJsonToFile(QString path, const QJsonObject js);

	template<class T>
	QJsonArray struct_list2jsonarray(const std::list<T>& lst)
	{
		QJsonArray rv;
		for (typename std::list<T>::const_iterator i = lst.cbegin(); i != lst.end(); i++) {
			T o = *i;
			QJsonObject js(o);
			rv.append(js);
		}
		return rv;
	};

	template<class T>
	QJsonArray struct_list2jsonarray_uptr(const std::list<std::unique_ptr<T>>& lst)
	{
		QJsonArray rv;
		for (typename std::list<std::unique_ptr<T>>::const_iterator i = lst.cbegin(); i != lst.end(); i++) {
			const std::unique_ptr<T>& o = *i;
			QJsonObject js;
			o->toJson(js);
			rv.append(js);
		}
		return rv;
	};


	template<class T>
	QJsonArray list_of_struct_list2jsonarray(const std::list <std::list<T>> & lst)
	{
		QJsonArray rv;
		for (typename std::list <std::list<T> >::const_iterator i = lst.cbegin(); i != lst.end(); i++) {
			const std::list<T>& IL = *i;
			QJsonArray arr2 = struct_list2jsonarray(IL);
			rv.append(arr2);
		}
		return rv;
	};

	template<class T>
	QJsonArray ingrl_list2jsonarray(const std::list<T>& lst)
	{
		QJsonArray rv;
		for (typename std::list<T>::const_iterator i = lst.cbegin(); i != lst.end(); i++) {
			const T o = *i;
			rv.append(o);
		}
		return rv;
	};

	template<class T>
	void jsonarray2struct_list(QJsonArray ar, std::list<T>& lst)
	{
		int Max = ar.size();
		for (int i = 0; i < Max; ++i) {
			QJsonObject js = ar[i].toObject();
			T o;
			o.fromJson(js);
			lst.push_back(o);
		}
	};

	template<class T>
	void jsonarray2struct_list_uptr(QJsonArray ar, std::list<std::unique_ptr<T>>& lst)
	{
		int Max = ar.size();
		for (int i = 0; i < Max; ++i) {
			QJsonObject js = ar[i].toObject();
			std::unique_ptr<T> o = T::factory::create(js);
			o->fromJson(js);
			lst.emplace_back(std::move(o));
		}
	};


	template<class T>
	void jsonarray2list(QJsonArray arr, std::list<T>& lst, std::true_type)
	{
# if QT_VERSION > QT_VERSION_CHECK(5, 6, 0)
		int Max = arr.size();
		for (int i = 0; i < Max; ++i) {
			auto v = arr[i].toInt();
			lst.push_back(v);
		}
#else
		int Max = arr.size();
		for (int i = 0; i < Max; ++i) {
			QString tmp = arr[i].toString();
			lst.push_back(tmp.toInt());
		}

#endif
	}

	template<class T>
	void jsonarray2list(const QJsonArray& arr, std::list<T>& lst, std::false_type)
	{
		int Max = arr.size();
		for (int i = 0; i < Max; ++i) {
			T v = arr[i].toString();
			lst.push_back(v);
		}
	}

	template<class T>
	void jsonarray2ingrl_list(const QJsonArray& arr, std::list<T >& lst)
	{
		jsonarray2list(arr, lst, std::is_integral<T>());
	};


	template<class T>
	void jsonarray2list_of_struct_list(QJsonArray arr, std::list <std::list<T>>& lst)
	{
		int Max = arr.size();
		for (int i = 0; i < Max; ++i) {
			QJsonArray arr2 = arr[i].toArray();
			std::list<T> lst2;
			jsonarray2struct_list(arr2, lst2);
			lst.push_back(lst2);
		}
	};

	class VoidType
	{
	public:
		static std::unique_ptr<VoidType> create(const QByteArray&)
		{
			return std::unique_ptr<VoidType>();
		};

		static VoidType& instance();
		operator QJsonObject ()const;
	};

	class NotAnException
	{
	public:
		static void raise(const QByteArray&, int, const std::string&) {};
	};

	template <class T, class D>
	class ListFromJsonLoader
	{
	public:
		static std::unique_ptr<T> create(const QByteArray& data)
		{
			std::unique_ptr<T> res(new T);
			QJsonDocument doc = QJsonDocument::fromJson(data);
			QJsonArray arr = doc.array();
			foreach(const QJsonValue & val, arr)
			{
				QJsonObject js = val.toObject();
				D o;
				o.fromJson(js);
				res->push_back(o);
			}
			return res;//std::move(res);
		}
	};

	/**
		DROPBOX_BLOCKING_CALL or DBC - macross converts 2 async callbacks into one blocking call
		that returns value of the first callback and throws exception in case of second callback.
	*/

#define DROPBOX_BLOCKING_CALL(AFUNC, REST, ARGV)    \
        std::unique_ptr<DropboxException> ex;   \
        std::unique_ptr<REST> result;           \
        AFUNC(ARGV,                             \
            [this, &result](std::unique_ptr<REST> r)        \
        {                                       \
            result = std::move(r);              \
            m_end_point->exitEventsLoop();      \
        },                                          \
            [&](std::unique_ptr<DropboxException> e)\
        {                                       \
            ex = std::move(e);                  \
            m_end_point->exitEventsLoop();      \
        }                                       \
        );                                      \
        m_end_point->runEventsLoop();           \
        if (ex)                                 \
            ex->raise();                        \
        return result;                          \

#define DATA_DBC(AFUNC, REST, ARGV, DATA)   \
        std::unique_ptr<DropboxException> ex;   \
        std::unique_ptr<REST> result;           \
        AFUNC(ARGV,                             \
            DATA,                               \
            [this, &result](std::unique_ptr<REST> r)        \
        {                                       \
            result = std::move(r);              \
            m_end_point->exitEventsLoop();      \
        },                                          \
            [&](std::unique_ptr<DropboxException> e)\
        {                                       \
            ex = std::move(e);                  \
            m_end_point->exitEventsLoop();      \
        }                                       \
        );                                      \
        m_end_point->runEventsLoop();           \
        if (ex)                                 \
            ex->raise();                        \
        return result;                          \



#define VOID_RESULT_ARG_WITH_DATA_DBC(AFUNC, ARGV, DATA)    \
        std::unique_ptr<DropboxException> ex;   \
        AFUNC(ARGV,                             \
            DATA,                               \
            [this](void)                \
        {                                       \
            m_end_point->exitEventsLoop();      \
        },                                          \
            [&](std::unique_ptr<DropboxException> e)\
        {                                       \
            ex = std::move(e);                  \
            m_end_point->exitEventsLoop();      \
        }                                       \
        );                                      \
        m_end_point->runEventsLoop();           \
        if (ex)                                 \
            ex->raise();                        \



#define VOID_ARG_DBC(AFUNC, REST)           \
        std::unique_ptr<DropboxException> ex;   \
        std::unique_ptr<REST> result;           \
        AFUNC([this, &result](std::unique_ptr<REST> r)      \
        {                                       \
            result = std::move(r);              \
            m_end_point->exitEventsLoop();      \
        },                                          \
            [&](std::unique_ptr<DropboxException> e)\
        {                                       \
            ex = std::move(e);                  \
            m_end_point->exitEventsLoop();      \
        }                                       \
        );                                      \
        m_end_point->runEventsLoop();           \
        if (ex)                                 \
            ex->raise();                        \
        return result;                          \


#define VOID_RESULT_DBC(AFUNC, ARGV)                \
        std::unique_ptr<DropboxException> ex;   \
        AFUNC(ARGV,                             \
            [this](void)                        \
        {                                       \
            m_end_point->exitEventsLoop();      \
        },                                          \
            [&](std::unique_ptr<DropboxException> e)\
        {                                       \
            ex = std::move(e);                  \
            m_end_point->exitEventsLoop();      \
        }                                       \
        );                                      \
        m_end_point->runEventsLoop();           \
        if (ex)                                 \
            ex->raise();                        \


#define VOID_ARG_VOID_RESULT_DBC(AFUNC)         \
        std::unique_ptr<DropboxException> ex;   \
        AFUNC([this](void)                      \
        {                                       \
            m_end_point->exitEventsLoop();      \
        },                                          \
            [&](std::unique_ptr<DropboxException> e)\
        {                                       \
            ex = std::move(e);                  \
            m_end_point->exitEventsLoop();      \
        }                                       \
        );                                      \
        m_end_point->runEventsLoop();           \
        if (ex)                                 \
            ex->raise();                        \




#define EXPECT(E, M) if(!E)qWarning() << M;
#define API_CHECK_STATE(E, M, S) if(!E){throw IllegalStateException(M, S); }



};
