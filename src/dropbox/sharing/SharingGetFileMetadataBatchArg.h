/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingFileAction.h"

namespace dropboxQt{
namespace sharing{
    class GetFileMetadataBatchArg{
        /**
            Arguments of :meth:`get_file_metadata_batch`

            field: files: The files to query.
            field: actions: File actions to query.
        */

    public:
        GetFileMetadataBatchArg(){};

        GetFileMetadataBatchArg(const std::list <QString>&& arg){ m_files = arg; };

    public:
        ///The files to query.
        const std::list <QString>& files()const{return m_files;};
        GetFileMetadataBatchArg& setFiles(const std::list <QString>&& arg){m_files=arg; return *this;};

        ///File actions to query.
        const std::list <FileAction>& actions()const{return m_actions;};
        GetFileMetadataBatchArg& setActions(const std::list <FileAction>&& arg){m_actions=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetFileMetadataBatchArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The files to query.
        std::list <QString> m_files;

        ///File actions to query.
        std::list <FileAction> m_actions;

    };//GetFileMetadataBatchArg

}//sharing
}//dropboxQt
