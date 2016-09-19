/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/properties/PropertiesPropertyField.h"

namespace dropboxQt{
namespace files{
    class PropertyGroupUpdate{
        /**
            field: template_id: A unique identifier for a property template.
            field: add_or_update_fields: List of property fields to update if
                the field already exists. If the field doesn't exist, add the
                field to the property group.
            field: remove_fields: List of property field names to remove from
                property group if the field exists.
        */

    public:
        PropertyGroupUpdate(){};

        PropertyGroupUpdate(const QString& arg){ m_template_id = arg; };

    public:
        ///A unique identifier for a property template.
        QString templateId()const{return m_template_id;};
        const PropertyGroupUpdate& setTemplateid(const QString& arg){m_template_id=arg; return *this;};

        ///List of property fields to update if the field already exists. If the field doesn't exist, add the field to the property group.
        const std::list <properties::PropertyField>& addOrUpdateFields()const{return m_add_or_update_fields;};
        const PropertyGroupUpdate& setAddorupdatefields(const std::list <properties::PropertyField>&& arg){m_add_or_update_fields=arg; return *this;};

        ///List of property field names to remove from property group if the field exists.
        const std::list <QString>& removeFields()const{return m_remove_fields;};
        const PropertyGroupUpdate& setRemovefields(const std::list <QString>&& arg){m_remove_fields=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PropertyGroupUpdate EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A unique identifier for a property template.
        QString m_template_id;

        ///List of property fields to update if the field already exists. If the field doesn't exist, add the field to the property group.
        std::list <properties::PropertyField> m_add_or_update_fields;

        ///List of property field names to remove from property group if the field exists.
        std::list <QString> m_remove_fields;

    };//PropertyGroupUpdate

}//files
}//dropboxQt
