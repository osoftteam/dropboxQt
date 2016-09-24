/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class MembersListArg{
        /**
            field: limit: Number of results to return per call.
            field: include_removed: Whether to return removed members.
        */

    public:
        MembersListArg():
        m_limit(1000)
        ,m_include_removed(false)
        {};

        MembersListArg(const int& arg):
        m_limit(1000)
        ,m_include_removed(false)
        { m_limit = arg; };

    public:
        ///Number of results to return per call.
        int limit()const{return m_limit;};
        MembersListArg& setLimit(const int& arg){m_limit=arg; return *this;};

        ///Whether to return removed members.
        bool includeRemoved()const{return m_include_removed;};
        MembersListArg& setIncluderemoved(const bool& arg){m_include_removed=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersListArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Number of results to return per call.
        int m_limit;

        ///Whether to return removed members.
        bool m_include_removed;

    };//MembersListArg

}//team
}//dropboxQt
