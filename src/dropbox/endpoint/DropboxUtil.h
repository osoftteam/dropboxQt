#pragma once

#include <list>
#include <memory>
#include <QString>
#include <QDebug>
#include <QDateTime>
#include <QVariant>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QNetworkReply>
#include "DropboxException.h"

namespace dropboxQt{
	namespace files
	{
		class Metadata;
	};

	typedef std::list <files::Metadata> FOLDER_ENTRIES;

    bool loadJsonFromFile(QString path, QJsonObject& js);
    bool storeJsonToFile(QString path, const QJsonObject js);

    template<class T> 
    QJsonArray struct_list2jsonarray(const std::list<T>& lst)
    {
        QJsonArray rv;
        for(typename std::list<T>::const_iterator i = lst.cbegin(); i != lst.end(); i++){
            const T& o = *i;
            //            QJsonObject js;
            //            o.toJson(js);
            QJsonObject js(o);
            rv.append(js);
        }
        return rv;
    };    
    
    template<class T> 
    QJsonArray list_of_struct_list2jsonarray(const std::list <std::list<T>> & lst)
    {
        QJsonArray rv;
        for(typename std::list <std::list<T> >::const_iterator i = lst.cbegin(); i != lst.end(); i++){
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
        for(typename std::list<T>::const_iterator i = lst.cbegin(); i != lst.end(); i++){
            const T& o = *i;
            rv.append(o);
        }
        return rv;
    };


    template<class T> 
    void jsonarray2struct_list(QJsonArray ar, std::list<T>& lst)
    {
        int Max = ar.size();
        for (int i = 0; i < Max; ++i){
            QJsonObject js = ar[i].toObject();
            T o;
            o.fromJson(js);
            lst.push_back(o);
        }
    };

    template<class T> 
    void jsonarray2list(QJsonArray arr, std::list<T>& lst, std::true_type)
    {
# if QT_VERSION > QT_VERSION_CHECK(5, 6, 0)
        int Max = arr.size();
        for (int i = 0; i < Max; ++i){
            T v = arr[i].toInt();
            lst.push_back(v);
        }
#else
        int Max = arr.size();
        for (int i = 0; i < Max; ++i){
            QString tmp = arr[i].toString();
            lst.push_back(tmp.toInt());
        }

#endif
    }

    template<class T> 
    void jsonarray2list(const QJsonArray& arr, std::list<T>& lst, std::false_type)
    {
        //non integral types - QString

        int Max = arr.size();
        for (int i = 0; i < Max; ++i){
            T v = arr[i].toString();
            lst.push_back(v);
        }
    }


    template<class T> 
    void jsonarray2ingrl_list(const QJsonArray& arr, std::list<T>& lst)
    {
        jsonarray2list(arr, lst, std::is_integral<T>());
    };


    template<class T> 
    void jsonarray2list_of_struct_list(QJsonArray arr, std::list <std::list<T> >& lst)
    {
        int Max = arr.size();
        for (int i = 0; i < Max; ++i){
            QJsonArray arr2 = arr[i].toArray();
            std::list<T> lst2;
            jsonarray2struct_list(arr2, lst2);
            lst.push_back(lst2);
        }
    };


#define EXPECT(E, M) if(!E)qWarning() << M;
#define DBOX_CHECK_STATE(E, M, S) if(!E){throw IllegalStateException(M, S); }
}
