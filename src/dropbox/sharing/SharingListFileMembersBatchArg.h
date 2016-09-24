/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class ListFileMembersBatchArg{
        /**
            Arguments for :meth:`list_file_members_batch`.

            field: files: Files for which to return members.
            field: limit: Number of members to return max per query. Defaults to
                10 if no limit is specified.
        */

    public:
        ListFileMembersBatchArg():
        m_limit(10)
        {};

        ListFileMembersBatchArg(const std::list <QString>&& arg):
        m_limit(10)
        { m_files = arg; };

    public:
        ///Files for which to return members.
        const std::list <QString>& files()const{return m_files;};
        ListFileMembersBatchArg& setFiles(const std::list <QString>&& arg){m_files=arg; return *this;};

        ///Number of members to return max per query. Defaults to 10 if no limit is specified.
        int limit()const{return m_limit;};
        ListFileMembersBatchArg& setLimit(const int& arg){m_limit=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFileMembersBatchArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Files for which to return members.
        std::list <QString> m_files;

        ///Number of members to return max per query. Defaults to 10 if no limit is specified.
        int m_limit;

    };//ListFileMembersBatchArg

}//sharing
}//dropboxQt
