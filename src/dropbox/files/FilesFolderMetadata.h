/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMetadata.h"
#include "dropbox/files/FilesFolderSharingInfo.h"
#include "dropbox/properties/PropertiesPropertyGroup.h"

namespace dropboxQt{
namespace files{
    class FolderMetadata : public Metadata{
        /**
            field: id: A unique identifier for the folder.
            field: shared_folder_id: Deprecated. Please use ``sharing_info``
                instead.
            field: sharing_info: Set if the folder is contained in a shared
                folder or is a shared folder mount point.
            field: property_groups: Additional information if the file has
                custom properties with the property template specified.
        */

    public:
        FolderMetadata(){};

        FolderMetadata(const QString& arg){ m_id = arg; };

    public:
        ///A unique identifier for the folder.
        QString id()const{return m_id;};
        const FolderMetadata& setId(const QString& arg){m_id=arg; return *this;};

        ///Deprecated. Please use :field:`sharing_info` instead.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const FolderMetadata& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///Set if the folder is contained in a shared folder or is a shared folder mount point.
        FolderSharingInfo sharingInfo()const{return m_sharing_info;};
        const FolderMetadata& setSharinginfo(const FolderSharingInfo& arg){m_sharing_info=arg; return *this;};

        ///Additional information if the file has custom properties with the property template specified.
        const std::list <properties::PropertyGroup>& propertyGroups()const{return m_property_groups;};
        const FolderMetadata& setPropertygroups(const std::list <properties::PropertyGroup>&& arg){m_property_groups=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FolderMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A unique identifier for the folder.
        QString m_id;

        ///Deprecated. Please use :field:`sharing_info` instead.
        QString m_shared_folder_id;

        ///Set if the folder is contained in a shared folder or is a shared folder mount point.
        FolderSharingInfo m_sharing_info;

        ///Additional information if the file has custom properties with the property template specified.
        std::list <properties::PropertyGroup> m_property_groups;

    };//FolderMetadata

}//files
}//dropboxQt
