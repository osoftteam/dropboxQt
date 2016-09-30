#pragma once

#include "DropboxHost.h"
#include "ApiEndpoint.h"

namespace dropboxQt{

    class Endpoint: public ApiEndpoint{
    public:
        Endpoint(ApiClient* c);

        template <class ARG, class RES, class RESULT_FACTORY, class EXCEPTION>
        RES rpcStyle(QString path, const ARG& arg)
        {
            QJsonObject js_out(arg);

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
            RESULT_FACTORY factory;
            QNetworkReply *reply = postData(req, bytes2post);
            if(!reply)return res;
            ENDPOINT_SETUP_DEFAULT_SLOTS(reply);
            QObject::connect(reply, &QNetworkReply::finished, [&]()
                             {
                                 status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                                 switch(status_code)
                                     {
                                     case 200:
                                         {
                                             QByteArray data = reply->readAll();
                                             if(!data.isEmpty())
                                                 {
                                                     res = std::move(factory.create(data));
                                                     ok = true;
                                                 }
                                         }break;
												 
                                     case 409:
                                         {
                                             exception_data = reply->readAll();
                                             ENDPOINT_PREPARE_ERR_INFO(exception_data, bytes2post);
                                             raise_details_exception = true;
                                         }break;
                                     default:
                                         {
                                             QByteArray data = reply->readAll();
                                             ENDPOINT_PREPARE_ERR_INFO(data, bytes2post);
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

        template <class ARG, class RES, class RESULT_FACTORY, class EXCEPTION>
        RES downloadStyle(QString path, const ARG& arg, QIODevice* writeTo)
        {
            QJsonObject js_out(arg);
            QUrl url(QString("https://%1/%2").arg(getHost().getContent()).arg(path));
            QNetworkRequest req(url);
            addAuthHeader(req);
            QJsonDocument doc(js_out);
            req.setRawHeader("Dropbox-API-Arg", doc.toJson(QJsonDocument::Compact));

            bool ok = false;
            std::string errorInfo = "", errInData = "";
            int status_code = 0;
            RES res;
            RESULT_FACTORY factory;
            QByteArray bytes2post;
            QNetworkReply *reply = postData(req, bytes2post);
            if(!reply)return res;
            ENDPOINT_SETUP_DEFAULT_SLOTS(reply);
            QObject::connect(reply, &QNetworkReply::readyRead, [&]()
                             {
                                 qint64 sz = reply->bytesAvailable();
                                 if(sz > 0 && writeTo != NULL){
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
                                                         res = std::move(factory.create(data));
                                                         break;
                                                     }
                                             }
                                             ok = true;
                                             exitEventLoop(reply);
                                         }break;
                                     default:
                                         {
                                             QByteArray data = reply->readAll();
                                             ENDPOINT_PREPARE_ERR_INFO(data, bytes2post);
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

        template <class ARG, class RES, class RESULT_FACTORY, class EXCEPTION>
        RES uploadStyle(QString path, const ARG& arg, QIODevice* readFrom)
        {
            QJsonObject js_out(arg);
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
            RESULT_FACTORY factory;
            QNetworkReply *reply = postData(req, readFrom ? readFrom->readAll() : QByteArray());
            if(!reply)return res;
            ENDPOINT_SETUP_DEFAULT_SLOTS(reply);
            QObject::connect(reply, &QNetworkReply::finished, [&]()
                             {
                                 int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                                 switch(status_code)
                                     {
                                     case 200:{
                                         QByteArray data = reply->readAll();
                                         if(!data.isEmpty())
                                             {
                                                 res = std::move(factory.create(data));
                                                 ok = true;
                                             }
                                         exitEventLoop(reply);
                                     }break;
                                     default:
                                         {
                                             QByteArray data = reply->readAll();
                                             QByteArray no_data_in_upload;
                                             ENDPOINT_PREPARE_ERR_INFO(data, no_data_in_upload);
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
    };//Endpoint
    
}//qtdropbox2
