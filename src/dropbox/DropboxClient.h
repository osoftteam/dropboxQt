#pragma once
#include "dropbox/endpoint/ApiUtil.h"
#include "dropbox/endpoint/DropboxAuthInfo.h"
#include "dropbox/endpoint/ApiException.h"
#include "dropbox/endpoint/ApiClient.h"

namespace dropboxQt{

    namespace auth      { class AuthRoutes; };
    namespace files     { class FilesRoutes; };
    namespace sharing   { class SharingRoutes; };
    namespace team      { class TeamRoutes; };
    namespace users     { class UsersRoutes; };
    class Endpoint;

    class DropboxClient: public ApiClient{
    Q_OBJECT
    public:
        DropboxClient();
        DropboxClient(const QString& access_token);
        ~DropboxClient();

        /// "auth" namespace API endpoint
        auth::AuthRoutes*           getAuth();

        /// "files" namespace API endpoint
        files::FilesRoutes*         getFiles();

        /// "sharing" namespace API endpoint
        sharing::SharingRoutes*     getSharing();

        /// "team" namespace API endpoint
        team::TeamRoutes*           getTeam();

        /// "users" namespace API endpoint
        users::UsersRoutes*         getUsers();

        /*
            Below are some 'shortcut' functions for those who don't
            want to deal with exceptions and don't need rich data response
        */

        /// download file from Dropbox
        bool downloadFile(QString dropboxFilePath, QString localDestinationPath);

        /// upload file to Dropbox
        bool uploadFile(QString localFilePath, QString dropboxDestinationPath);

        /// return true if file exist on given path
        bool fileExists(QString dropboxPath);

        /// return true if folder exist on given path
        bool folderExists(QString dropboxPath);

        /// create a new folder
        bool createFolder(QString dropboxPath);

        /// create a new folder if it doesn't exists
        bool ensureFolder(QString dropboxPath);

        /// move a file or folder
        bool moveFile(QString moveFrom, QString moveTo);

        /// delete a file or folder
        bool deleteFile(QString dropboxPath);

        /// return list of the files in a folder
        std::list<QString> listFolder(QString dropboxPath);

        QString lastApiCall();

    protected:
        std::unique_ptr<auth::AuthRoutes>           m_AuthRoutes;
        std::unique_ptr<files::FilesRoutes>         m_FilesRoutes;
        std::unique_ptr<sharing::SharingRoutes>     m_SharingRoutes;
        std::unique_ptr<team::TeamRoutes>           m_TeamRoutes;
        std::unique_ptr<users::UsersRoutes>         m_UsersRoutes;
        std::unique_ptr<Endpoint>                   m_endpoint;
    };//DropboxClient


	namespace files
	{
		class Metadata;
	};

	typedef std::list <std::unique_ptr<files::Metadata>> FOLDER_ENTRIES;
}//dropboxQt
