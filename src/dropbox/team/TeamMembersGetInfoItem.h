/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamTeamMemberInfo.h"

namespace dropboxQt{
namespace team{
    class MembersGetInfoItem{
        /**
            Describes a result obtained for a single user whose id was specified
            in the parameter of :meth:`members_get_info`.

            field: id_not_found: An ID that was provided as a parameter to
                :meth:`members_get_info`, and did not match a corresponding
                user. This might be a team_member_id, an email, or an external
                ID, depending on how the method was called.
            field: member_info: Info about a team member.
        */
    public:
        enum Tag{

		/*An ID that was provided as a parameter to :route:`members/get_info`, and did not match a corresponding user. This might be a team_member_id, an email, or an external ID, depending on how the method was called.*/
		MembersGetInfoItem_ID_NOT_FOUND,
		/*Info about a team member.*/
		MembersGetInfoItem_MEMBER_INFO
        };

        MembersGetInfoItem(){}
        MembersGetInfoItem(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///An ID that was provided as a parameter to :route:`members/get_info`, and did not match a corresponding user. This might be a team_member_id, an email, or an external ID, depending on how the method was called.
        QString getIdNotFound()const{DBOX_CHECK_STATE((MembersGetInfoItem_ID_NOT_FOUND == m_tag), "expected tag: MembersGetInfoItem_ID_NOT_FOUND", m_tag);return m_id_not_found;};

        ///Info about a team member.
        TeamMemberInfo getMemberInfo()const{DBOX_CHECK_STATE((MembersGetInfoItem_MEMBER_INFO == m_tag), "expected tag: MembersGetInfoItem_MEMBER_INFO", m_tag);return m_member_info;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersGetInfoItem EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_id_not_found;
        TeamMemberInfo m_member_info;
    };//MembersGetInfoItem

}//team
}//dropboxQt
