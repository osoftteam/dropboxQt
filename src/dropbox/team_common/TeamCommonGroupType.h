/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_common"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team_common{
    class GroupType{
        /**
            The group type determines how a group is created and managed.

            field: team: A group to which team members are automatically added.
                Applicable to `team folders <https://www.dropbox.com/help/986>`_
                only.
            field: user_managed: A group is created and managed by a user.
        */
    public:
        enum Tag{

		/*A group to which team members are automatically added. Applicable to :link:`team folders https://www.dropbox.com/help/986` only.*/
		GroupType_TEAM,
		/*A group is created and managed by a user.*/
		GroupType_USER_MANAGED,
		/*None*/
		GroupType_OTHER
        };

        GroupType(){}
        GroupType(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupType EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupType

}//team_common
}//dropboxQt
