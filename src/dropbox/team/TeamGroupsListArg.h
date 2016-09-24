/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class GroupsListArg{
        /**
            field: limit: Number of results to return per call.
        */

    public:
        GroupsListArg():
        m_limit(1000)
        {};

        GroupsListArg(const int& arg):
        m_limit(1000)
        { m_limit = arg; };

    public:
        ///Number of results to return per call.
        int limit()const{return m_limit;};
        GroupsListArg& setLimit(const int& arg){m_limit=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupsListArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Number of results to return per call.
        int m_limit;

    };//GroupsListArg

}//team
}//dropboxQt
