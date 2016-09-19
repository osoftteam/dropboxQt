/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class GroupsListContinueError{
        /**
            field: invalid_cursor: The cursor is invalid.
        */
    public:
        enum Tag{

		/*The cursor is invalid.*/
		GroupsListContinueError_INVALID_CURSOR,
		/*None*/
		GroupsListContinueError_OTHER
        };

        GroupsListContinueError(){}
        GroupsListContinueError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupsListContinueError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupsListContinueError

}//team
}//dropboxQt
