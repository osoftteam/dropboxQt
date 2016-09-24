#include <QFile>
#include <QJsonParseError>
#include <functional>
#include "DropboxUtil.h"
#include "dropbox/DropboxClient.h"
#include "dropbox/files/FilesRoutes.h"

namespace dropboxQt{

    bool loadJsonFromFile(QString path, QJsonObject& js)
    {
        QFile jf(path);
        if(!jf.open(QFile::ReadOnly)){
            return false;
        }
        QJsonParseError  err;
        QJsonDocument jd = QJsonDocument().fromJson(jf.readAll(), &err);
        if(err.error == QJsonParseError::NoError){
            js = jd.object();
            return true;
        }
        return false;
    };

    bool storeJsonToFile(QString path, const QJsonObject js)
    {
        QFile jf(path);
        if(!jf.open(QFile::WriteOnly)){
            return false;
        }

        QJsonDocument jd(js);
        jf.write(jd.toJson());
        jf.close();
        return true;
    };


bool DropboxClient::downloadFile(QString dropboxFilePath, QString localDestinationPath)
{
	bool rv = false;

	QFile out(localDestinationPath);
	if (!out.open(QFile::WriteOnly | QIODevice::Truncate)){
		qWarning() << "Error opening file: " << localDestinationPath;
		return false;
	}
	
	try
        {
            files::DownloadArg arg(dropboxFilePath);
            files::Metadata res = getFiles()->download(arg, &out);
			rv = true;
        }
	catch (DropboxException& e)
        {
            qWarning() << "DropboxClient::downloadFile Exception: " << e.what();
        }

	out.close();
	return rv;
};

bool DropboxClient::uploadFile(QString localFilePath, QString dropboxDestinationPath)
{
	bool rv = false;

    QFile file_in(localFilePath);
    if(!file_in.open(QFile::ReadOnly)){
        qWarning() << "Error opening file: " << localFilePath;
        return false;
    }
    
    try
        {
			files::CommitInfo arg(dropboxDestinationPath);
            getFiles()->upload(arg, &file_in);
			rv = true;
        }
    catch(DropboxException& e)
        {
            qWarning() << "DropboxClient::uploadFile Exception: " << e.what();
        }
    file_in.close();
	return rv;
};

bool DropboxClient::createFolder(QString dropboxPath)
{
	bool rv = false;
    try
        {
            files::CreateFolderArg arg(dropboxPath);
            files::FolderMetadata res = getFiles()->createFolder(arg);
            rv = true;
        }
    catch(DropboxException& e)
        {
            qWarning() << "DropboxClient::createFolder Exception: " << e.what();
        }
	return rv;
};

std::list<QString> DropboxClient::lsFolder(QString dropboxPath)
{
	std::list<QString> rv;

    try
        {		
		std::function<void(const files::ListFolderResult& r)> add_folder_entries = [&](const files::ListFolderResult& r)
			{
				const FOLDER_ENTRIES& entries = r.entries();
				for(FOLDER_ENTRIES::const_iterator i = entries.cbegin(); i != entries.cend(); i++)
					{
						const files::Metadata& m = *i;
						rv.push_back(m.name());
					}		
			};

			files::ListFolderArg arg(dropboxPath);
			files::ListFolderResult r = getFiles()->listFolder(arg);
			add_folder_entries(r);
            while(r.hasMore())
                {
                    files::ListFolderContinueArg continue_arg(r.cursor());
                    r = getFiles()->listFolderContinue(continue_arg);
                    add_folder_entries(r);
                }
        }
    catch(DropboxException& e)
        {
            qWarning() << "DropboxClient::lsFolder Exception: " << e.what();
        }

	return rv;
};

bool DropboxClient::deleteFile(QString dropboxPath)
{
	bool rv = false;
    try
        {
            files::DeleteArg d(dropboxPath);
            getFiles()->deleteOperation(d);
			rv = true;
        }
    catch(DropboxException& e)
        {
            qWarning() << "DropboxClient::deleteFile Exception: " << e.what();
        }
	return rv;
};

bool DropboxClient::moveFile(QString moveFrom, QString moveTo)
{
	bool rv = false;
    try
        {
			files::RelocationArg r_arg;
			r_arg.setFrompath(moveFrom).setTopath(moveTo);
			getFiles()->move(r_arg);
			rv = true;
        }
    catch(DropboxException& e)
        {
            qWarning() << "DropboxClient::deleteFile Exception: " << e.what();
        }
	return rv;
};

}
