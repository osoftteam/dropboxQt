/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification 
***********************************************************/

#include "DropboxClient.h"
#include "dropbox/auth/AuthRoutes.h"
#include "dropbox/files/FilesRoutes.h"
#include "dropbox/sharing/SharingRoutes.h"
#include "dropbox/team/TeamRoutes.h"
#include "dropbox/users/UsersRoutes.h"
#include "dropbox/endpoint/Endpoint.h"


namespace dropboxQt{
DropboxClient::DropboxClient()
{
    m_endpoint.reset(new Endpoint(this));
};

DropboxClient::DropboxClient(const QString& access_token)
:m_token(access_token)
{
    m_endpoint.reset(new Endpoint(this));
};

DropboxClient::~DropboxClient(){

};


auth::AuthRoutes* DropboxClient::getAuth(){
    if(!m_AuthRoutes){
        m_AuthRoutes.reset(new auth::AuthRoutes(m_endpoint.get()));
    };
    return m_AuthRoutes.get();
};


files::FilesRoutes* DropboxClient::getFiles(){
    if(!m_FilesRoutes){
        m_FilesRoutes.reset(new files::FilesRoutes(m_endpoint.get()));
    };
    return m_FilesRoutes.get();
};


sharing::SharingRoutes* DropboxClient::getSharing(){
    if(!m_SharingRoutes){
        m_SharingRoutes.reset(new sharing::SharingRoutes(m_endpoint.get()));
    };
    return m_SharingRoutes.get();
};

team::TeamRoutes* DropboxClient::getTeam(){
    if(!m_TeamRoutes){
        m_TeamRoutes.reset(new team::TeamRoutes(m_endpoint.get()));
    };
    return m_TeamRoutes.get();
};



users::UsersRoutes* DropboxClient::getUsers(){
    if(!m_UsersRoutes){
        m_UsersRoutes.reset(new users::UsersRoutes(m_endpoint.get()));
    };
    return m_UsersRoutes.get();
};

#ifdef DROPBOX_QT_AUTOTEST
Endpoint* DropboxClient::getEndpoint(){return m_endpoint.get();}
#endif //DROPBOX_QT_AUTOTEST
}//dropboxQt
