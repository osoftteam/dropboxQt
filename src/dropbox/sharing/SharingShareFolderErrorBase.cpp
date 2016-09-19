/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingShareFolderErrorBase.h"

namespace dropboxQt{

namespace sharing{
///ShareFolderErrorBase

ShareFolderErrorBase::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ShareFolderErrorBase::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ShareFolderErrorBase_EMAIL_UNVERIFIED:{
            if(!name.isEmpty())
                js[name] = QString("email_unverified");
        }break;
        case ShareFolderErrorBase_BAD_PATH:{
            if(!name.isEmpty())
                js[name] = QString("bad_path");
            m_bad_path.toJson(js, "bad_path");
        }break;
        case ShareFolderErrorBase_TEAM_POLICY_DISALLOWS_MEMBER_POLICY:{
            if(!name.isEmpty())
                js[name] = QString("team_policy_disallows_member_policy");
        }break;
        case ShareFolderErrorBase_DISALLOWED_SHARED_LINK_POLICY:{
            if(!name.isEmpty())
                js[name] = QString("disallowed_shared_link_policy");
        }break;
        case ShareFolderErrorBase_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void ShareFolderErrorBase::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("email_unverified") == 0){
        m_tag = ShareFolderErrorBase_EMAIL_UNVERIFIED;
    }
    if(s.compare("bad_path") == 0){
        m_tag = ShareFolderErrorBase_BAD_PATH;
    }
    if(s.compare("team_policy_disallows_member_policy") == 0){
        m_tag = ShareFolderErrorBase_TEAM_POLICY_DISALLOWS_MEMBER_POLICY;
    }
    if(s.compare("disallowed_shared_link_policy") == 0){
        m_tag = ShareFolderErrorBase_DISALLOWED_SHARED_LINK_POLICY;
    }
    if(s.compare("other") == 0){
        m_tag = ShareFolderErrorBase_OTHER;
    }
}

QString ShareFolderErrorBase::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ShareFolderErrorBase");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ShareFolderErrorBase ShareFolderErrorBase::EXAMPLE(){
    ShareFolderErrorBase rv;
    rv.bad_path = sharing::SharePathError::EXAMPLE();
    rv.m_tag = ShareFolderErrorBase_EMAIL_UNVERIFIED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
