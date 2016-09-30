#include "ApiEndpoint.h"

#ifdef API_QT_AUTOTEST
#include "dropbox/AUTOTEST/ApiAutotest.h"
#define LOG_REQUEST     ApiAutotest::INSTANCE() << m_last_request_info;\
                        ApiAutotest::INSTANCE() << "--------------------------";

#endif

using namespace dropboxQt;

ApiEndpoint::ApiEndpoint(ApiClient* c):m_client(c), m_reply_in_progress(NULL)
{

}

void ApiEndpoint::addAuthHeader(QNetworkRequest& request)
{
    QString bearer = QString("Bearer %1").arg(m_client->getToken());
    request.setRawHeader("Authorization", bearer.toUtf8());
};

void ApiEndpoint::execEventLoop(QNetworkReply *reply)
{
    m_reply_in_progress = reply;
    m_loop.exec();
};

void ApiEndpoint::exitEventLoop(QNetworkReply *reply)
{
    EXPECT((m_reply_in_progress == reply), QString("Expected stored reply object."));
    m_reply_in_progress = NULL;
    reply->deleteLater();
    m_loop.exit();
};

void ApiEndpoint::cancel()
{
    if(m_reply_in_progress != NULL){
        m_reply_in_progress->abort();
    }
};

QNetworkReply* ApiEndpoint::getData(const QNetworkRequest &req)
{    
    m_last_request_info = "GET " + req.url().toString() + "\n";
    QList<QByteArray> lst = req.rawHeaderList();
    for(QList<QByteArray>::iterator i = lst.begin(); i != lst.end(); i++)
        m_last_request_info += QString("--header %1 : %2 \n").arg(i->constData()).arg(req.rawHeader(*i).constData());

#ifdef API_QT_AUTOTEST
    LOG_REQUEST;
    return nullptr;
#else
    QNetworkReply *reply = m_con_mgr.get(req);
    return reply;
#endif
};

QNetworkReply* ApiEndpoint::postData(const QNetworkRequest &req, const QByteArray& data)
{    
    m_last_request_info = "POST " + req.url().toString() + "\n";
    QList<QByteArray> lst = req.rawHeaderList();
    for(QList<QByteArray>::iterator i = lst.begin(); i != lst.end(); i++)
        m_last_request_info += QString("--header %1 : %2 \n").arg(i->constData()).arg(req.rawHeader(*i).constData());
    m_last_request_info += QString("--data %1").arg(data.constData());

#ifdef API_QT_AUTOTEST
    LOG_REQUEST;
    return nullptr;
#else
    QNetworkReply *reply = m_con_mgr.post(req, data);
    return reply;
#endif
};

QNetworkReply* ApiEndpoint::putData(const QNetworkRequest &req, const QByteArray& data)
{    
    m_last_request_info = "PUT " + req.url().toString() + "\n";
    QList<QByteArray> lst = req.rawHeaderList();
    for(QList<QByteArray>::iterator i = lst.begin(); i != lst.end(); i++)
        m_last_request_info += QString("--header %1 : %2 \n").arg(i->constData()).arg(req.rawHeader(*i).constData());
    m_last_request_info += QString("--data %1").arg(data.constData());

#ifdef API_QT_AUTOTEST
    LOG_REQUEST;
    return nullptr;
#else
    QNetworkReply *reply = m_con_mgr.put(req, data);
    return reply;
#endif
};

QNetworkReply* ApiEndpoint::deleteData(const QNetworkRequest &req)
{    
    m_last_request_info = "DELETE " + req.url().toString() + "\n";
    QList<QByteArray> lst = req.rawHeaderList();
    for(QList<QByteArray>::iterator i = lst.begin(); i != lst.end(); i++)
        m_last_request_info += QString("--header %1 : %2 \n").arg(i->constData()).arg(req.rawHeader(*i).constData());

#ifdef API_QT_AUTOTEST
    LOG_REQUEST;
    return nullptr;
#else
    QNetworkReply *reply = m_con_mgr.deleteResource(req);
    return reply;
#endif
};
