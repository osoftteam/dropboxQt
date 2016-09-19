/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupAccessType.h"

namespace dropboxQt{

namespace team{
///GroupAccessType

GroupAccessType::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupAccessType::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupAccessType_MEMBER:{
            if(!name.isEmpty())
                js[name] = "member";
        }break;
        case GroupAccessType_OWNER:{
            if(!name.isEmpty())
                js[name] = "owner";
        }break;
    }//switch
}

void GroupAccessType::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("member") == 0){
        m_tag = GroupAccessType_MEMBER;
    }
    if(s.compare("owner") == 0){
        m_tag = GroupAccessType_OWNER;
    }
}

QString GroupAccessType::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupAccessType");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupAccessType GroupAccessType::EXAMPLE(){
    GroupAccessType rv;
    rv.m_tag = GroupAccessType_MEMBER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
