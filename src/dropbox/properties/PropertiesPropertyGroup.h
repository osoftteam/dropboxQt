/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/properties/PropertiesPropertyField.h"

namespace dropboxQt{
namespace properties{
    class PropertyGroup{
        /**
            Collection of custom properties in filled property templates.

            field: template_id: A unique identifier for a property template
                type.
            field: fields: This is a list of custom properties associated with a
                file. There can be up to 32 properties for a template.
        */

    public:
        PropertyGroup(){};

        PropertyGroup(const QString& arg){ m_template_id = arg; };

    public:
        ///A unique identifier for a property template type.
        QString templateId()const{return m_template_id;};
        PropertyGroup& setTemplateid(const QString& arg){m_template_id=arg; return *this;};

        ///This is a list of custom properties associated with a file. There can be up to 32 properties for a template.
        const std::list <PropertyField>& fields()const{return m_fields;};
        PropertyGroup& setFields(const std::list <PropertyField>&& arg){m_fields=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PropertyGroup EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A unique identifier for a property template type.
        QString m_template_id;

        ///This is a list of custom properties associated with a file. There can be up to 32 properties for a template.
        std::list <PropertyField> m_fields;

    };//PropertyGroup

}//properties
}//dropboxQt
