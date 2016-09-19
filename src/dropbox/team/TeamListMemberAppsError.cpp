/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMemberAppsError.h"

namespace dropboxQt{

namespace team{
///ListMemberAppsError

ListMemberAppsError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListMemberAppsError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListMemberAppsError_MEMBER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("member_not_found");
        }break;
        case ListMemberAppsError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void ListMemberAppsError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("member_not_found") == 0){
        m_tag = ListMemberAppsError_MEMBER_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = ListMemberAppsError_OTHER;
    }
}

QString ListMemberAppsError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListMemberAppsError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMemberAppsError ListMemberAppsError::EXAMPLE(){
    ListMemberAppsError rv;
    rv.m_tag = ListMemberAppsError_MEMBER_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
