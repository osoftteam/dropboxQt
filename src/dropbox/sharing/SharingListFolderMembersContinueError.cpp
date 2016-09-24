/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFolderMembersContinueError.h"

namespace dropboxQt{

namespace sharing{
///ListFolderMembersContinueError

ListFolderMembersContinueError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFolderMembersContinueError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFolderMembersContinueError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("access_error");
            m_access_error.toJson(js, "access_error");
        }break;
        case ListFolderMembersContinueError_INVALID_CURSOR:{
            if(!name.isEmpty())
                js[name] = QString("invalid_cursor");
        }break;
        case ListFolderMembersContinueError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void ListFolderMembersContinueError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("access_error") == 0){
        m_tag = ListFolderMembersContinueError_ACCESS_ERROR;
        m_access_error.fromJson(js["access_error"].toObject());
    }
    else if(s.compare("invalid_cursor") == 0){
        m_tag = ListFolderMembersContinueError_INVALID_CURSOR;

    }
    else if(s.compare("other") == 0){
        m_tag = ListFolderMembersContinueError_OTHER;

    }
}

QString ListFolderMembersContinueError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFolderMembersContinueError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFolderMembersContinueError ListFolderMembersContinueError::EXAMPLE(){
    ListFolderMembersContinueError rv;
    rv.access_error = sharing::SharedFolderAccessError::EXAMPLE();
    rv.m_tag = ListFolderMembersContinueError_ACCESS_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
