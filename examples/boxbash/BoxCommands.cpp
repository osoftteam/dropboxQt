#include <iostream>
#include <functional>
#include <QBuffer>
#include <QFile>
#include <QFileInfo>
#include "BoxCommands.h"
#include "dropbox/endpoint/DropboxException.h"
#include "dropbox/files/FilesRoutes.h"
#include "dropbox/users/UsersRoutes.h"

using namespace dropboxQt;

BoxCommands::BoxCommands(DropboxClient& c):m_c(c)
{
	m_curr_dir = "/";
};

void BoxCommands::account(QString)
{
    try
        {
            users::FullAccount accountInfo = m_c.getUsers()->getCurrentAccount();
            std::cout << accountInfo.toString().toStdString() << std::endl;
        }
    catch(DropboxException& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
};

void BoxCommands::pwd(QString)
{
	std::cout << m_curr_dir.toStdString() << std::endl;
};

void BoxCommands::ls(QString)
{
    try
        {
            QString path = m_curr_dir;
            if(path.compare("/") == 0)
                {
                    path = "";
                }
            files::ListFolderArg arg(path);
            files::ListFolderResult r = m_c.getFiles()->listFolder(arg);
		
            std::function<void(const files::ListFolderResult& r)> print_folder_entries = [&](const files::ListFolderResult& r)
                {
                    const FOLDER_ENTRIES& entries = r.entries();
                    for(FOLDER_ENTRIES::const_iterator i = entries.cbegin(); i != entries.cend(); i++)
                        {
                            const files::Metadata& m = *i;
                            std::cout << m.name().toStdString() << std::endl;
                        }		
                };

            print_folder_entries(r);
		
            while(r.hasMore())
                {
                    files::ListFolderContinueArg continue_arg(r.cursor());
                    r = m_c.getFiles()->listFolderContinue(continue_arg);
                    print_folder_entries(r);
                }
        }
    catch(DropboxException& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
};

void BoxCommands::mkdir(QString path)
{
	if(path.isEmpty()){
		std::cout << "ERROR argument reguired" << std::endl;
		return;
	}

    try
        {
            files::CreateFolderArg arg(m_curr_dir + path);
            files::FolderMetadata res = m_c.getFiles()->createFolder(arg);
            std::cout << "created: " << path.toStdString() << " id=" << res.id().toStdString() << std::endl;
        }
    catch(DropboxException& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
};

void BoxCommands::cat(QString fileName)
{
	if(fileName.isEmpty()){
		std::cout << "ERROR argument reguired" << std::endl;
		return;
	}

	QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);

    try
        {
            files::DownloadArg d(m_curr_dir + fileName);
            files::FileMetadata md = m_c.getFiles()->download(d, &buffer);
            std::cout << byteArray.constData();
        }
    catch(DropboxException& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
  

    buffer.close();
	//std::cout << "running cat.. " << arg.toStdString() << std::endl;
};

void BoxCommands::cd(QString dirName)
{
	if(dirName.isEmpty()){
		std::cout << "ERROR argument reguired" << std::endl;
		return;
	}

    try
        {
            QString newPath = m_curr_dir + dirName;
            if(dirName[0] == '/')
                {
                    //absolute path
                    newPath = dirName;
                }
            else
                {
                    if(dirName == "..")
                        {
                            if(m_curr_dir != "/")
                                {
                                    int idx = newPath.lastIndexOf("/", -4);
                                    if(idx != -1)
                                        {
                                            newPath.remove(idx, newPath.size());
                                        }                            
                                }
                            else
                                {
                                    std::cout << "root folder" << std::endl;
                                    return;
                                }
                        }
                }

            //            if(newPath.compare("/") == 0)
            //                newPath = "";
            
            //            files::GetMetadataArg arg(newPath);
            //            files::Metadata md = m_c.getFiles()->getMetadata(arg);
            //            std::cout << md.toString().toStdString() << std::endl;
            m_curr_dir = newPath;
            if(m_curr_dir.length() == 0 || m_curr_dir[m_curr_dir.length() - 1] != '/')
                m_curr_dir += "/";            
            ls("");
        }
    catch(DropboxException& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
};

void BoxCommands::put(QString fileName)
{
	if(fileName.isEmpty()){
		std::cout << "ERROR argument reguired" << std::endl;
		return;
	}

    QFile file_in(fileName);
    if(!file_in.open(QFile::ReadOnly)){
        std::cout << "Error opening file: " << fileName.toStdString() << std::endl;
        return;
    }

	QFileInfo fi(fileName);
	QString doxFileName = fi.fileName();
    
    try
        {
			files::CommitInfo arg(m_curr_dir + doxFileName);
            files::Metadata res = m_c.getFiles()->upload(arg, &file_in);
            std::cout << "file uploaded" << std::endl;
            std::cout << res.toString().toStdString() << std::endl;
        }
    catch(DropboxException& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
    file_in.close();
};

void BoxCommands::get(QString fileName)
{
	if (fileName.isEmpty()){
		std::cout << "ERROR argument reguired" << std::endl;
		return;
	}

	QFile out(fileName);
	if (!out.open(QFile::WriteOnly | QIODevice::Truncate)){
		std::cout << "Error opening file: " << fileName.toStdString() << std::endl;
		return;
	}

	try
	{
		files::DownloadArg arg(m_curr_dir + fileName);
		files::Metadata res = m_c.getFiles()->download(arg, &out);
		std::cout << "file downloaded" << std::endl;
		std::cout << res.toString().toStdString() << std::endl;
	}
	catch (DropboxException& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	out.close();
};

void BoxCommands::rm(QString fileName)
{
	if(fileName.isEmpty()){
		std::cout << "ERROR argument reguired" << std::endl;
		return;
	}
    
    std::string confirm_str;
    std::cout << "Please type 'yes' to confirm deleting " << fileName.toStdString() << " >";
    std::cin >> confirm_str;
    if(confirm_str != "yes")
        return;

    try
        {
            files::DeleteArg d(m_curr_dir + fileName);
            files::Metadata md = m_c.getFiles()->deleteOperation(d);
            std::cout << "deleted";
            std::cout << md.toString().toStdString();
        }
    catch(DropboxException& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
    
};
