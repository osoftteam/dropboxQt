/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListMemberAppsArg{
        /**
            field: team_member_id: The team member id
        */

    public:
        ListMemberAppsArg(){};

        ListMemberAppsArg(const QString& arg){ m_team_member_id = arg; };

    public:
        ///The team member id
        QString teamMemberId()const{return m_team_member_id;};
        ListMemberAppsArg& setTeammemberid(const QString& arg){m_team_member_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMemberAppsArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The team member id
        QString m_team_member_id;

    };//ListMemberAppsArg

}//team
}//dropboxQt
