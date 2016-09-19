/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupDeleteError.h"

namespace dropboxQt{

namespace team{
///GroupDeleteError

GroupDeleteError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupDeleteError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupSelectorError_GROUP_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("group_not_found");
        }break;
        case GroupSelectorError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
        case GroupDeleteError_GROUP_ALREADY_DELETED:{
            if(!name.isEmpty())
                js[name] = QString("group_already_deleted");
        }break;
    }//switch
}

void GroupDeleteError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("group_not_found") == 0){
        m_tag = GroupSelectorError_GROUP_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = GroupSelectorError_OTHER;
    }
    if(s.compare("group_already_deleted") == 0){
        m_tag = GroupDeleteError_GROUP_ALREADY_DELETED;
    }
}

QString GroupDeleteError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupDeleteError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupDeleteError GroupDeleteError::EXAMPLE(){
    GroupDeleteError rv;
    rv.m_tag = GroupDeleteError_GROUP_ALREADY_DELETED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
