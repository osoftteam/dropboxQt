/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesCommitInfo.h"
#include "dropbox/properties/PropertiesPropertyGroup.h"

namespace dropboxQt{
namespace files{
    class CommitInfoWithProperties : public CommitInfo{
        /**
            field: property_groups: List of custom properties to add to file.
        */

    public:
        CommitInfoWithProperties(){};

        CommitInfoWithProperties(const std::list <properties::PropertyGroup>&& arg){ m_property_groups = arg; };

    public:
        ///List of custom properties to add to file.
        const std::list <properties::PropertyGroup>& propertyGroups()const{return m_property_groups;};
        CommitInfoWithProperties& setPropertygroups(const std::list <properties::PropertyGroup>&& arg){m_property_groups=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static CommitInfoWithProperties EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///List of custom properties to add to file.
        std::list <properties::PropertyGroup> m_property_groups;

    };//CommitInfoWithProperties

}//files
}//dropboxQt
