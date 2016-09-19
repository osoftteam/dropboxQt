/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#include "dropbox/team_policies/TeamPoliciesSharedFolderMemberPolicy.h"

namespace dropboxQt{

namespace team_policies{
///SharedFolderMemberPolicy

SharedFolderMemberPolicy::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharedFolderMemberPolicy::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharedFolderMemberPolicy_TEAM:{
            if(!name.isEmpty())
                js[name] = "team";
        }break;
        case SharedFolderMemberPolicy_ANYONE:{
            if(!name.isEmpty())
                js[name] = "anyone";
        }break;
        case SharedFolderMemberPolicy_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharedFolderMemberPolicy::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("team") == 0){
        m_tag = SharedFolderMemberPolicy_TEAM;
    }
    if(s.compare("anyone") == 0){
        m_tag = SharedFolderMemberPolicy_ANYONE;
    }
    if(s.compare("other") == 0){
        m_tag = SharedFolderMemberPolicy_OTHER;
    }
}

QString SharedFolderMemberPolicy::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharedFolderMemberPolicy");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedFolderMemberPolicy SharedFolderMemberPolicy::EXAMPLE(){
    SharedFolderMemberPolicy rv;
    rv.m_tag = SharedFolderMemberPolicy_TEAM;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team_policies
}//dropboxQt
