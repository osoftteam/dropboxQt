/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class GroupAccessType{
        /**
            Role of a user in group.

            field: member: User is a member of the group, but has no special
                permissions.
            field: owner: User can rename the group, and add/remove members.
        */
    public:
        enum Tag{

		/*User is a member of the group, but has no special permissions.*/
		GroupAccessType_MEMBER,
		/*User can rename the group, and add/remove members.*/
		GroupAccessType_OWNER
        };

        GroupAccessType(){}
        GroupAccessType(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupAccessType EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupAccessType

}//team
}//dropboxQt
