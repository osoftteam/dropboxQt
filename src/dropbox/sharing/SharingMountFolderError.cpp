/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingMountFolderError.h"

namespace dropboxQt{

namespace sharing{
///MountFolderError

MountFolderError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MountFolderError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case MountFolderError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case MountFolderError_INSIDE_SHARED_FOLDER:{
            if(!name.isEmpty())
                js[name] = "inside_shared_folder";
        }break;
        case MountFolderError_INSUFFICIENT_QUOTA:{
            if(!name.isEmpty())
                js[name] = "insufficient_quota";
            js["insufficient_quota"] = (QJsonObject)m_insufficient_quota;
        }break;
        case MountFolderError_ALREADY_MOUNTED:{
            if(!name.isEmpty())
                js[name] = "already_mounted";
        }break;
        case MountFolderError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = "no_permission";
        }break;
        case MountFolderError_NOT_MOUNTABLE:{
            if(!name.isEmpty())
                js[name] = "not_mountable";
        }break;
        case MountFolderError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void MountFolderError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("access_error") == 0){
        m_tag = MountFolderError_ACCESS_ERROR;
    }
    if(s.compare("inside_shared_folder") == 0){
        m_tag = MountFolderError_INSIDE_SHARED_FOLDER;
    }
    if(s.compare("insufficient_quota") == 0){
        m_tag = MountFolderError_INSUFFICIENT_QUOTA;
    }
    if(s.compare("already_mounted") == 0){
        m_tag = MountFolderError_ALREADY_MOUNTED;
    }
    if(s.compare("no_permission") == 0){
        m_tag = MountFolderError_NO_PERMISSION;
    }
    if(s.compare("not_mountable") == 0){
        m_tag = MountFolderError_NOT_MOUNTABLE;
    }
    if(s.compare("other") == 0){
        m_tag = MountFolderError_OTHER;
    }
}

QString MountFolderError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MountFolderError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MountFolderError MountFolderError::EXAMPLE(){
    MountFolderError rv;
    rv.access_error = sharing::SharedFolderAccessError::EXAMPLE();
    rv.insufficient_quota = sharing::InsufficientQuotaAmounts::EXAMPLE();
    rv.m_tag = MountFolderError_ACCESS_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
