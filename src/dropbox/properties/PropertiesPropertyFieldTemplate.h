/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/properties/PropertiesPropertyType.h"
#include "dropbox/properties/PropertiesPropertyType.h"

namespace dropboxQt{
namespace properties{
    class PropertyFieldTemplate{
        /**
            Describe a single property field type which that can be part of a
            property template.

            field: name: This is the name or key of a custom property in a
                property template. File property names can be up to 256 bytes.
            field: description: This is the description for a custom property in
                a property template. File property description can be up to 1024
                bytes.
            field: type: This is the data type of the value of this property.
                This type will be enforced upon property creation and
                modifications.
        */

    public:
        PropertyFieldTemplate(){};

        PropertyFieldTemplate(const QString& arg){ m_name = arg; };

    public:
        ///This is the name or key of a custom property in a property template. File property names can be up to 256 bytes.
        QString name()const{return m_name;};
        const PropertyFieldTemplate& setName(const QString& arg){m_name=arg; return *this;};

        ///This is the description for a custom property in a property template. File property description can be up to 1024 bytes.
        QString description()const{return m_description;};
        const PropertyFieldTemplate& setDescription(const QString& arg){m_description=arg; return *this;};

        ///This is the data type of the value of this property. This type will be enforced upon property creation and modifications.
        PropertyType type()const{return m_type;};
        const PropertyFieldTemplate& setType(const PropertyType& arg){m_type=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PropertyFieldTemplate EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///This is the name or key of a custom property in a property template. File property names can be up to 256 bytes.
        QString m_name;

        ///This is the description for a custom property in a property template. File property description can be up to 1024 bytes.
        QString m_description;

        ///This is the data type of the value of this property. This type will be enforced upon property creation and modifications.
        PropertyType m_type;

    };//PropertyFieldTemplate

}//properties
}//dropboxQt
