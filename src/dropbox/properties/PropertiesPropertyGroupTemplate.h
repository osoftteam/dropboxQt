/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/properties/PropertiesPropertyFieldTemplate.h"

namespace dropboxQt{
namespace properties{
    class PropertyGroupTemplate{
        /**
            Describes property templates that can be filled and associated with
            a file.

            field: name: A display name for the property template. Property
                template names can be up to 256 bytes.
            field: description: Description for new property template. Property
                template descriptions can be up to 1024 bytes.
            field: fields: This is a list of custom properties associated with a
                property template. There can be up to 64 properties in a single
                property template.
        */

    public:
        PropertyGroupTemplate(){};

        PropertyGroupTemplate(const QString& arg){ m_name = arg; };

    public:
        ///A display name for the property template. Property template names can be up to 256 bytes.
        QString name()const{return m_name;};
        const PropertyGroupTemplate& setName(const QString& arg){m_name=arg; return *this;};

        ///Description for new property template. Property template descriptions can be up to 1024 bytes.
        QString description()const{return m_description;};
        const PropertyGroupTemplate& setDescription(const QString& arg){m_description=arg; return *this;};

        ///This is a list of custom properties associated with a property template. There can be up to 64 properties in a single property template.
        const std::list <PropertyFieldTemplate>& fields()const{return m_fields;};
        const PropertyGroupTemplate& setFields(const std::list <PropertyFieldTemplate>&& arg){m_fields=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PropertyGroupTemplate EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A display name for the property template. Property template names can be up to 256 bytes.
        QString m_name;

        ///Description for new property template. Property template descriptions can be up to 1024 bytes.
        QString m_description;

        ///This is a list of custom properties associated with a property template. There can be up to 64 properties in a single property template.
        std::list <PropertyFieldTemplate> m_fields;

    };//PropertyGroupTemplate

}//properties
}//dropboxQt
