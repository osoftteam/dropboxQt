#pragma once

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QJsonObject>
#include <QEventLoop>
#include "ApiException.h"
#include "ApiClient.h"

namespace dropboxQt{
    class ApiEndpoint
    {
    public:
        ApiEndpoint(ApiClient* c);
        QString       lastRequestInfo()const{return m_last_request_info;}
        void          cancel();

    protected:
        virtual void execEventLoop(QNetworkReply *reply);
        virtual void exitEventLoop(QNetworkReply *reply);
        virtual void addAuthHeader(QNetworkRequest& request);
        
        virtual QNetworkReply*	getData(const QNetworkRequest &request);
        virtual QNetworkReply*	postData(const QNetworkRequest &request, const QByteArray& data);
        virtual QNetworkReply*	putData(const QNetworkRequest &request, const QByteArray& data);
        virtual QNetworkReply*	deleteData(const QNetworkRequest &request);
    protected:
        QNetworkAccessManager m_con_mgr;
        QEventLoop            m_loop;
        ApiClient*            m_client;
        QNetworkReply*        m_reply_in_progress;
        QString               m_last_request_info;        
    };
}
