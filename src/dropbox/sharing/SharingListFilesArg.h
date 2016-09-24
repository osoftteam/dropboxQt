/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingFileAction.h"

namespace dropboxQt{
namespace sharing{
    class ListFilesArg{
        /**
            Arguments for :meth:`list_received_files`.

            field: limit: Number of files to return max per query. Defaults to
                100 if no limit is specified.
            field: actions: File actions to query.
        */

    public:
        ListFilesArg():
        m_limit(100)
        {};

        ListFilesArg(const int& arg):
        m_limit(100)
        { m_limit = arg; };

    public:
        ///Number of files to return max per query. Defaults to 100 if no limit is specified.
        int limit()const{return m_limit;};
        ListFilesArg& setLimit(const int& arg){m_limit=arg; return *this;};

        ///File actions to query.
        const std::list <FileAction>& actions()const{return m_actions;};
        ListFilesArg& setActions(const std::list <FileAction>&& arg){m_actions=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFilesArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Number of files to return max per query. Defaults to 100 if no limit is specified.
        int m_limit;

        ///File actions to query.
        std::list <FileAction> m_actions;

    };//ListFilesArg

}//sharing
}//dropboxQt
