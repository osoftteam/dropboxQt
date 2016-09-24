/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class IncludeMembersArg{
        /**
            field: return_members: Whether to return the list of members in the
                group.  Note that the default value will cause all the group
                members  to be returned in the response. This may take a long
                time for large groups.
        */

    public:
        IncludeMembersArg():
        m_return_members(false)
        {};

        IncludeMembersArg(const bool& arg):
        m_return_members(false)
        { m_return_members = arg; };

    public:
        ///Whether to return the list of members in the group.  Note that the default value will cause all the group members  to be returned in the response. This may take a long time for large groups.
        bool returnMembers()const{return m_return_members;};
        IncludeMembersArg& setReturnmembers(const bool& arg){m_return_members=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static IncludeMembersArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Whether to return the list of members in the group.  Note that the default value will cause all the group members  to be returned in the response. This may take a long time for large groups.
        bool m_return_members;

    };//IncludeMembersArg

}//team
}//dropboxQt
