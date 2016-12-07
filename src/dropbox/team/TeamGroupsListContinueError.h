/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
***********************************************************/

#pragma once

#include "dropbox/endpoint/ApiUtil.h"

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
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GroupsListContinueError>  create(const QByteArray& data);
            static std::unique_ptr<GroupsListContinueError>  create(const QJsonObject& js);
        };



    protected:
        Tag m_tag;
    };//GroupsListContinueError

}//team
}//dropboxQt
