/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class GroupSelector{
        /**
            Argument for selecting a single group, either by group_id or by
            external group ID.

            field: group_id: Group ID.
            field: group_external_id: External ID of the group.
        */
    public:
        enum Tag{

		/*Group ID.*/
		GroupSelector_GROUP_ID,
		/*External ID of the group.*/
		GroupSelector_GROUP_EXTERNAL_ID
        };

        GroupSelector(){}
        GroupSelector(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Group ID.
        QString getGroupId()const{DBOX_CHECK_STATE((GroupSelector_GROUP_ID == m_tag), "expected tag: GroupSelector_GROUP_ID", m_tag);return m_group_id;};

        ///External ID of the group.
        QString getGroupExternalId()const{DBOX_CHECK_STATE((GroupSelector_GROUP_EXTERNAL_ID == m_tag), "expected tag: GroupSelector_GROUP_EXTERNAL_ID", m_tag);return m_group_external_id;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupSelector EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_group_id;
        QString m_group_external_id;
    };//GroupSelector

}//team
}//dropboxQt
