/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingJobError.h"

namespace dropboxQt{

namespace sharing{
///JobError

JobError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void JobError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case JobError_UNSHARE_FOLDER_ERROR:{
            if(!name.isEmpty())
                js[name] = "unshare_folder_error";
            m_unshare_folder_error.toJson(js, "unshare_folder_error");
        }break;
        case JobError_REMOVE_FOLDER_MEMBER_ERROR:{
            if(!name.isEmpty())
                js[name] = "remove_folder_member_error";
            m_remove_folder_member_error.toJson(js, "remove_folder_member_error");
        }break;
        case JobError_RELINQUISH_FOLDER_MEMBERSHIP_ERROR:{
            if(!name.isEmpty())
                js[name] = "relinquish_folder_membership_error";
            m_relinquish_folder_membership_error.toJson(js, "relinquish_folder_membership_error");
        }break;
        case JobError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void JobError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("unshare_folder_error") == 0){
        m_tag = JobError_UNSHARE_FOLDER_ERROR;
    }
    if(s.compare("remove_folder_member_error") == 0){
        m_tag = JobError_REMOVE_FOLDER_MEMBER_ERROR;
    }
    if(s.compare("relinquish_folder_membership_error") == 0){
        m_tag = JobError_RELINQUISH_FOLDER_MEMBERSHIP_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = JobError_OTHER;
    }
}

QString JobError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "JobError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
JobError JobError::EXAMPLE(){
    JobError rv;
    rv.unshare_folder_error = sharing::UnshareFolderError::EXAMPLE();
    rv.remove_folder_member_error = sharing::RemoveFolderMemberError::EXAMPLE();
    rv.relinquish_folder_membership_error = sharing::RelinquishFolderMembershipError::EXAMPLE();
    rv.m_tag = JobError_UNSHARE_FOLDER_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
