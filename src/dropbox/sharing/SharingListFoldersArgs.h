/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingFolderAction.h"

namespace dropboxQt{
namespace sharing{
    class ListFoldersArgs{
        /**
            field: limit: The maximum number of results to return per request.
            field: actions: This is a list indicating whether each returned
                folder data entry will include a boolean field
                ``FolderPermission.allow`` that describes whether the current
                user can perform the `FolderAction` on the folder.
        */

    public:
        ListFoldersArgs():
        m_limit(1000)
        {};

        ListFoldersArgs(const int& arg):
        m_limit(1000)
        { m_limit = arg; };

    public:
        ///The maximum number of results to return per request.
        int limit()const{return m_limit;};
        const ListFoldersArgs& setLimit(const int& arg){m_limit=arg; return *this;};

        ///This is a list indicating whether each returned folder data entry will include a boolean field :field:`FolderPermission.allow` that describes whether the current user can perform the `FolderAction` on the folder.
        const std::list <FolderAction>& actions()const{return m_actions;};
        const ListFoldersArgs& setActions(const std::list <FolderAction>&& arg){m_actions=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFoldersArgs EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The maximum number of results to return per request.
        int m_limit;

        ///This is a list indicating whether each returned folder data entry will include a boolean field :field:`FolderPermission.allow` that describes whether the current user can perform the `FolderAction` on the folder.
        std::list <FolderAction> m_actions;

    };//ListFoldersArgs

}//sharing
}//dropboxQt
