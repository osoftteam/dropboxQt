/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingMemberAction.h"

namespace dropboxQt{

namespace sharing{
///MemberAction

MemberAction::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MemberAction::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case MemberAction_LEAVE_A_COPY:{
            if(!name.isEmpty())
                js[name] = "leave_a_copy";
        }break;
        case MemberAction_MAKE_EDITOR:{
            if(!name.isEmpty())
                js[name] = "make_editor";
        }break;
        case MemberAction_MAKE_OWNER:{
            if(!name.isEmpty())
                js[name] = "make_owner";
        }break;
        case MemberAction_MAKE_VIEWER:{
            if(!name.isEmpty())
                js[name] = "make_viewer";
        }break;
        case MemberAction_MAKE_VIEWER_NO_COMMENT:{
            if(!name.isEmpty())
                js[name] = "make_viewer_no_comment";
        }break;
        case MemberAction_REMOVE:{
            if(!name.isEmpty())
                js[name] = "remove";
        }break;
        case MemberAction_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void MemberAction::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("leave_a_copy") == 0){
        m_tag = MemberAction_LEAVE_A_COPY;
    }
    if(s.compare("make_editor") == 0){
        m_tag = MemberAction_MAKE_EDITOR;
    }
    if(s.compare("make_owner") == 0){
        m_tag = MemberAction_MAKE_OWNER;
    }
    if(s.compare("make_viewer") == 0){
        m_tag = MemberAction_MAKE_VIEWER;
    }
    if(s.compare("make_viewer_no_comment") == 0){
        m_tag = MemberAction_MAKE_VIEWER_NO_COMMENT;
    }
    if(s.compare("remove") == 0){
        m_tag = MemberAction_REMOVE;
    }
    if(s.compare("other") == 0){
        m_tag = MemberAction_OTHER;
    }
}

QString MemberAction::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MemberAction");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberAction MemberAction::EXAMPLE(){
    MemberAction rv;
    rv.m_tag = MemberAction_LEAVE_A_COPY;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
