#pragma once

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QJsonObject>
#include <QEventLoop>
#include "DropboxException.h"
#include "dropbox/DropboxClient.h"
#include "dropbox/AUTOTEST/DropboxAutotest.h"

#define SETUP_DEFAULT_SLOTS(R)                                          \
    QObject::connect(R, &QNetworkReply::downloadProgress, [&](qint64 bytesProcessed, qint64 total){ \
            emit m_client->progress(bytesProcessed, total);             \
        });                                                             \
    QObject::connect(R, &QNetworkReply::uploadProgress, [&](qint64 bytesProcessed, qint64 total){ \
            emit m_client->progress(bytesProcessed, total);             \
        });                                                             \


#define PREPARE_ERR_INFO(D, B) QString tmp = QString("ERROR. Unexpected status %1 %2 ").arg(status_code).arg(path); \
    tmp += D;                                                        \
    tmp += "\n";                                                        \
    tmp += "request was: POST " + req.url().toString() + "\n";          \
    QList<QByteArray> lst = req.rawHeaderList();                        \
    for(QList<QByteArray>::iterator i = lst.begin(); i != lst.end(); i++) \
        tmp += QString("--header %1 : %2 \n").arg(i->constData()).arg(req.rawHeader(*i).constData()); \
    tmp += QString("--data %1").arg(B.constData());                     \
    errorInfo = tmp.toStdString();                                      \

namespace dropboxQt{

    class DropboxClient;

    class Endpoint{
    public:
        Endpoint(DropboxClient* c);

        template <class RES, class RES_SERIALIZER, class EXCEPTION>
        RES rpcStyle(QString path, const QJsonObject& js_out)
        {
            QUrl url(QString("https://%1/%2").arg(getHost().getApi()).arg(path));
            QNetworkRequest req(url);
            addAuthHeader(req);
            req.setRawHeader("Content-Type", "application/json; charset=utf-8");

            QByteArray bytes2post;
            QJsonDocument doc(js_out);
            
            if(js_out.isEmpty()){
                bytes2post.append("null");
            }
            else{
                QJsonDocument doc(js_out);
                bytes2post = doc.toJson(QJsonDocument::Compact);
            }           

            bool ok = false;
            bool raise_details_exception = false;
            QByteArray exception_data;
            std::string errorInfo;
            int status_code = 0;
            RES res;
            RES_SERIALIZER serializer;
            QNetworkReply *reply = m_con_mgr.post(req, bytes2post);
            SETUP_DEFAULT_SLOTS(reply)
            QObject::connect(reply, &QNetworkReply::finished, [&]()
                                {
                                    status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                                    switch(status_code)
                                        {
                                        case 200:
                                            {
                                                if(serializer.hasLoad()){
                                                    QByteArray data = reply->readAll();
                                                    if(!data.isEmpty())
                                                        {
														serializer.load(data, res);
                                                        ok = true;
                                                        }
                                                }
											}break;
												 
                                            case 409:
                                                {
                                                    exception_data = reply->readAll();
													PREPARE_ERR_INFO(exception_data, bytes2post);
                                                    raise_details_exception = true;
                                                }break;
                                        default:
                                            {
                                                QByteArray data = reply->readAll();
                                                PREPARE_ERR_INFO(data, bytes2post);
                                            }break;
                                        }
                                    exitEventLoop(reply);
                                });//response lambda
            execEventLoop(reply);
            if(raise_details_exception)
                {
					EXCEPTION::raise(exception_data, status_code, errorInfo);
                }
            if(!ok)
                {
                    throw ReplyException(errorInfo, status_code, ""); 
                }
            return res;
        }

        template <class RES, class RES_SERIALIZER, class EXCEPTION>
        RES downloadStyle(QString path, const QJsonObject& js_out, QIODevice* writeTo)
        {
            QUrl url(QString("https://%1/%2").arg(getHost().getContent()).arg(path));
            QNetworkRequest req(url);
            addAuthHeader(req);
            QJsonDocument doc(js_out);
            req.setRawHeader("Dropbox-API-Arg", doc.toJson(QJsonDocument::Compact));

            bool ok = false;
            std::string errorInfo = "", errInData = "";
            int status_code = 0;
            RES res;
            RES_SERIALIZER serializer;
            QByteArray bytes2post;
            QNetworkReply *reply = m_con_mgr.post(req, bytes2post);
            SETUP_DEFAULT_SLOTS(reply)
            QObject::connect(reply, &QNetworkReply::readyRead, [&]()
                                {
                                    qint64 sz = reply->bytesAvailable();
                                    if(sz > 0){
                                        QByteArray data = reply->read(sz);
                                        writeTo->write(data);
										if(errInData.empty())
											errInData = data.constData();
                                    }
                                });

            QObject::connect(reply, &QNetworkReply::finished, [&]()
                             {
                                 int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                                 switch(status_code)
                                     {
                                     case 200:
                                         {
                                             ok = true;
                                             exitEventLoop(reply);
                                         }break;// fall-through
                                     case 206:
                                         {
                                             QList<QByteArray> lst = reply->rawHeaderList();
                                             for(QList<QByteArray>::iterator i = lst.begin(); i != lst.end(); i++){
                                                 QByteArray data =  reply->rawHeader(*i);
                                                 if(!data.isEmpty())
                                                     {
                                                         serializer.load(data, res);
                                                     }
                                             }
                                             ok = true;
                                             exitEventLoop(reply);
                                         }break;
                                     default:
                                         {
                                             QByteArray data = reply->readAll();
                                             PREPARE_ERR_INFO(data, bytes2post);
                                             if(data.isEmpty()){
                                                 errorInfo += "\n";
                                                 errorInfo += errInData;
                                             }
                                             exitEventLoop(reply);
                                         }
                                     }				
                             });//response lambda
            execEventLoop(reply);
            if(!ok)
                {
                    throw ReplyException(errorInfo, status_code, ""); 
                }
            return res;
        }

        template <class RES, class RES_SERIALIZER, class EXCEPTION>
        RES uploadStyle(QString path, const QJsonObject& js_out, QIODevice* readFrom)
        {
            QUrl url(QString("https://%1/%2").arg(getHost().getContent()).arg(path));
            QNetworkRequest req(url);
            addAuthHeader(req);
            QJsonDocument doc(js_out);
            req.setRawHeader("Dropbox-API-Arg", doc.toJson(QJsonDocument::Compact));
            req.setRawHeader("Content-Type", "application/octet-stream");

            bool ok = false;
            std::string errorInfo;
            int status_code = 0;
            RES res;
            RES_SERIALIZER serializer;
            QNetworkReply *reply = m_con_mgr.post(req, readFrom->readAll());
            SETUP_DEFAULT_SLOTS(reply);
            QObject::connect(reply, &QNetworkReply::finished, [&]()
                             {
                                 int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                                 switch(status_code)
                                     {
                                     case 200:{
                                         if(serializer.hasLoad())
                                             {
                                                 QByteArray data = reply->readAll();
                                                 if(!data.isEmpty())
                                                     {
                                                         serializer.load(data, res);
                                                         ok = true;
                                                     }
                                             }
                                         exitEventLoop(reply);
                                     }break;
                                     default:
                                         {
                                             QByteArray data = reply->readAll();
                                             QByteArray no_data_in_upload;
                                             PREPARE_ERR_INFO(data, no_data_in_upload);
                                             exitEventLoop(reply);
                                         }
                                     }
                             });
            execEventLoop(reply);
            if(!ok)
                {
                    throw ReplyException(errorInfo, status_code, ""); 
                }
            return res;
        }

        const DropboxHost& getHost()const{return DropboxHost::DEFAULT();}
        void cancel();

    protected:
        void execEventLoop(QNetworkReply *reply);
        void exitEventLoop(QNetworkReply *reply);
        void addAuthHeader(QNetworkRequest& request);
    protected:
        QNetworkAccessManager m_con_mgr;
        QEventLoop            m_loop;
        DropboxClient*        m_client;
        QNetworkReply*        m_reply_in_progress;
    };//Endpoint

    class VoidResult{};
    class VoidFromJsonLoader
    {
    public:
        static void load(const QByteArray&, VoidResult& ){};
        static bool hasLoad(){return false;}
    };

	class NotAnException
	{
	public:
		static void raise(const QByteArray&, int, const std::string& ){};
	};

    template <class T>
    class StructFromJsonLoader
    {
    public:
        static void load(const QByteArray& d, T& o)
        {
            if(!d.isEmpty())
                {
                    QJsonDocument doc = QJsonDocument::fromJson(d);
                    QJsonObject js_in = doc.object();
					o.fromJson(js_in);
			}
        };
        static bool hasLoad(){return true;}
    };

    template <class T, class D>
    class ListFromJsonLoader
    {
    public:
        static void load(const QByteArray& d, T& c)
        {
			QJsonDocument doc = QJsonDocument::fromJson(d);
			QJsonArray arr = doc.array();
			foreach (const QJsonValue & val, arr)
			{
				QJsonObject js = val.toObject();
				D o;
				o.fromJson(js);
				c.push_back(o);
			}
        };
        static bool hasLoad(){return true;}
    };
    
}//qtdropbox2
