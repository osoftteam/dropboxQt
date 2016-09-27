/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMetadata.h"

namespace dropboxQt{
namespace files{
    class DeletedMetadata : public Metadata{
        /**
            Indicates that there used to be a file or folder at this path, but
            it no longer exists.
        */

    public:
        DeletedMetadata(){};


    public:
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<DeletedMetadata>  create(const QByteArray& data);
            static std::unique_ptr<DeletedMetadata>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static DeletedMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
    };//DeletedMetadata

}//files
}//dropboxQt
