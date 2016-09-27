/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class GroupsSelector{
        /**
            Argument for selecting a list of groups, either by group_ids, or
            external group IDs.

            field: group_ids: List of group IDs.
            field: group_external_ids: List of external IDs of groups.
        */
    public:
        enum Tag{

		/*List of group IDs.*/
		GroupsSelector_GROUP_IDS,
		/*List of external IDs of groups.*/
		GroupsSelector_GROUP_EXTERNAL_IDS
        };

        GroupsSelector(){}
        GroupsSelector(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///List of group IDs.
        const std::list <QString>& getGroupIds()const{DBOX_CHECK_STATE((GroupsSelector_GROUP_IDS == m_tag), "expected tag: GroupsSelector_GROUP_IDS", m_tag);return m_group_ids;};

        ///List of external IDs of groups.
        const std::list <QString>& getGroupExternalIds()const{DBOX_CHECK_STATE((GroupsSelector_GROUP_EXTERNAL_IDS == m_tag), "expected tag: GroupsSelector_GROUP_EXTERNAL_IDS", m_tag);return m_group_external_ids;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GroupsSelector>  create(const QByteArray& data);
            static std::unique_ptr<GroupsSelector>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static GroupsSelector EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        std::list <QString> m_group_ids;
        std::list <QString> m_group_external_ids;
    };//GroupsSelector

}//team
}//dropboxQt
