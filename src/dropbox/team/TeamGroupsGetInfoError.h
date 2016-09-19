/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class GroupsGetInfoError{
        /**
            field: group_not_on_team: The group is not on your team.
        */
    public:
        enum Tag{

		/*The group is not on your team.*/
		GroupsGetInfoError_GROUP_NOT_ON_TEAM,
		/*None*/
		GroupsGetInfoError_OTHER
        };

        GroupsGetInfoError(){}
        GroupsGetInfoError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupsGetInfoError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupsGetInfoError

}//team
}//dropboxQt
