/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersListContinueError.h"

namespace dropboxQt{

namespace team{
///MembersListContinueError

MembersListContinueError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersListContinueError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case MembersListContinueError_INVALID_CURSOR:{
            if(!name.isEmpty())
                js[name] = QString("invalid_cursor");
        }break;
        case MembersListContinueError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void MembersListContinueError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("invalid_cursor") == 0){
        m_tag = MembersListContinueError_INVALID_CURSOR;

    }
    else if(s.compare("other") == 0){
        m_tag = MembersListContinueError_OTHER;

    }
}

QString MembersListContinueError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersListContinueError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersListContinueError MembersListContinueError::EXAMPLE(){
    MembersListContinueError rv;
    rv.m_tag = MembersListContinueError_INVALID_CURSOR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
