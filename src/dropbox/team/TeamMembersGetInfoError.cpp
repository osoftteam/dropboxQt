/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersGetInfoError.h"

namespace dropboxQt{

namespace team{
///MembersGetInfoError

MembersGetInfoError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersGetInfoError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case MembersGetInfoError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void MembersGetInfoError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("other") == 0){
        m_tag = MembersGetInfoError_OTHER;

    }
}

QString MembersGetInfoError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersGetInfoError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersGetInfoError MembersGetInfoError::EXAMPLE(){
    MembersGetInfoError rv;
    rv.m_tag = MembersGetInfoError_OTHER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
