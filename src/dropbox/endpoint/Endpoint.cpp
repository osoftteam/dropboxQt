#include "Endpoint.h"

using namespace dropboxQt;

Endpoint::Endpoint(DropboxClient* c):m_client(c), m_reply_in_progress(NULL)
{

}

void Endpoint::addAuthHeader(QNetworkRequest& request)
{
    QString bearer = QString("Bearer %1").arg(m_client->getToken());
    request.setRawHeader("Authorization", bearer.toUtf8());
};

void Endpoint::execEventLoop(QNetworkReply *reply)
{
    m_reply_in_progress = reply;
    m_loop.exec();
};

void Endpoint::exitEventLoop(QNetworkReply *reply)
{
    EXPECT((m_reply_in_progress == reply), QString("Expected stored reply object."));
    m_reply_in_progress = NULL;
    reply->deleteLater();
    m_loop.exit();
};

void Endpoint::cancel()
{
    if(m_reply_in_progress != NULL){
        m_reply_in_progress->abort();
    }
};

