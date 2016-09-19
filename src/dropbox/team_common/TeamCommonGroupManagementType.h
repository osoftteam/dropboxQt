/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_common"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team_common{
    class GroupManagementType{
        /**
            The group type determines how a group is managed.

            field: company_managed: A group which is managed by team admins
                only.
            field: user_managed: A group which is managed by selected users.
        */
    public:
        enum Tag{

		/*A group which is managed by team admins only.*/
		GroupManagementType_COMPANY_MANAGED,
		/*A group which is managed by selected users.*/
		GroupManagementType_USER_MANAGED,
		/*None*/
		GroupManagementType_OTHER
        };

        GroupManagementType(){}
        GroupManagementType(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupManagementType EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupManagementType

}//team_common
}//dropboxQt
