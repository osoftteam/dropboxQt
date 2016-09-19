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

#ifdef DROPBOX_QT_AUTOTEST
void Endpoint::getWebPage(QString path)
{
    QUrl url(path);
    QNetworkRequest req(url);
    QNetworkReply *reply = m_con_mgr.get(req);
    DropboxAutotest::INSTANCE() << req;

    SETUP_DEFAULT_SLOTS(reply);

    QObject::connect(reply, &QNetworkReply::finished, [&]()
                     {
                         int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                         DropboxAutotest::INSTANCE() << QString("status-code: %1").arg(status_code);
                         if(status_code == 200){
                             DropboxAutotest::INSTANCE() << reply->readAll();
                         }
                         exitEventLoop(reply);
                     });
    execEventLoop(reply);
}
#endif //DROPBOX_QT_AUTOTEST
