/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{
namespace team{
    class MembersGetInfoArgs{
        /**
            field: members: List of team members.
        */

    public:
        MembersGetInfoArgs(){};

        MembersGetInfoArgs(const std::list <UserSelectorArg>&& arg){ m_members = arg; };

    public:
        ///List of team members.
        const std::list <UserSelectorArg>& members()const{return m_members;};
        const MembersGetInfoArgs& setMembers(const std::list <UserSelectorArg>&& arg){m_members=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersGetInfoArgs EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///List of team members.
        std::list <UserSelectorArg> m_members;

    };//MembersGetInfoArgs

}//team
}//dropboxQt
