/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMembersDevicesError.h"

namespace dropboxQt{

namespace team{
///ListMembersDevicesError

ListMembersDevicesError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListMembersDevicesError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListMembersDevicesError_RESET:{
            if(!name.isEmpty())
                js[name] = "reset";
        }break;
        case ListMembersDevicesError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListMembersDevicesError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("reset") == 0){
        m_tag = ListMembersDevicesError_RESET;
    }
    if(s.compare("other") == 0){
        m_tag = ListMembersDevicesError_OTHER;
    }
}

QString ListMembersDevicesError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListMembersDevicesError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMembersDevicesError ListMembersDevicesError::EXAMPLE(){
    ListMembersDevicesError rv;
    rv.m_tag = ListMembersDevicesError_RESET;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
