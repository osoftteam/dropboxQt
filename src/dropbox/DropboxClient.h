/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification 
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/endpoint/DropboxAuthInfo.h"

namespace dropboxQt{

    namespace auth { class AuthRoutes; };
    namespace files { class FilesRoutes; };
    namespace sharing { class SharingRoutes; };
    namespace team { class TeamRoutes; };
    namespace users { class UsersRoutes; };
    class Endpoint;

    class DropboxClient: public QObject{
    Q_OBJECT
    public:
        DropboxClient(const QString& access_token);
        ~DropboxClient();

        auth::AuthRoutes* getAuth();
        files::FilesRoutes* getFiles();
        sharing::SharingRoutes* getSharing();
        team::TeamRoutes* getTeam();
        users::UsersRoutes* getUsers();

        QString getToken()const{return m_token;}


        #ifdef DROPBOX_QT_AUTOTEST
        Endpoint* getEndpoint();
        #endif //DROPBOX_QT_AUTOTEST


    signals:
        void progress(qint64 bytesProcessed, qint64 total);
    protected:
        std::unique_ptr<auth::AuthRoutes> m_AuthRoutes;
        std::unique_ptr<files::FilesRoutes> m_FilesRoutes;
        std::unique_ptr<sharing::SharingRoutes> m_SharingRoutes;
        std::unique_ptr<team::TeamRoutes> m_TeamRoutes;
        std::unique_ptr<users::UsersRoutes> m_UsersRoutes;

        std::unique_ptr<Endpoint> m_endpoint;
        QString m_token;
    };//DropboxClient
}//dropboxQt
