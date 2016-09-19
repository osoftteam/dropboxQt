/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersGetInfoItem.h"

namespace dropboxQt{

namespace team{
///MembersGetInfoItem

MembersGetInfoItem::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersGetInfoItem::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case MembersGetInfoItem_ID_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("id_not_found");
            if(!m_id_not_found.isEmpty())
                js["id_not_found"] = QString(m_id_not_found);
        }break;
        case MembersGetInfoItem_MEMBER_INFO:{
            if(!name.isEmpty())
                js[name] = QString("member_info");
            js["member_info"] = (QJsonObject)m_member_info;
        }break;
    }//switch
}

void MembersGetInfoItem::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("id_not_found") == 0){
        m_tag = MembersGetInfoItem_ID_NOT_FOUND;
    }
    if(s.compare("member_info") == 0){
        m_tag = MembersGetInfoItem_MEMBER_INFO;
    }
}

QString MembersGetInfoItem::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersGetInfoItem");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersGetInfoItem MembersGetInfoItem::EXAMPLE(){
    MembersGetInfoItem rv;
    rv.id_not_found = "test1value";
    rv.member_info = team::TeamMemberInfo::EXAMPLE();
    rv.m_tag = MembersGetInfoItem_ID_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
