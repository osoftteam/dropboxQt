/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/properties/PropertiesPropertyGroup.h"

namespace dropboxQt{
namespace files{
    class PropertyGroupWithPath{
        /**
            field: path: A unique identifier for the file.
            field: property_groups: Filled custom property templates associated
                with a file.
        */

    public:
        PropertyGroupWithPath(){};

        PropertyGroupWithPath(const QString& arg){ m_path = arg; };

    public:
        ///A unique identifier for the file.
        QString path()const{return m_path;};
        const PropertyGroupWithPath& setPath(const QString& arg){m_path=arg; return *this;};

        ///Filled custom property templates associated with a file.
        const std::list <properties::PropertyGroup>& propertyGroups()const{return m_property_groups;};
        const PropertyGroupWithPath& setPropertygroups(const std::list <properties::PropertyGroup>&& arg){m_property_groups=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PropertyGroupWithPath EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A unique identifier for the file.
        QString m_path;

        ///Filled custom property templates associated with a file.
        std::list <properties::PropertyGroup> m_property_groups;

    };//PropertyGroupWithPath

}//files
}//dropboxQt
