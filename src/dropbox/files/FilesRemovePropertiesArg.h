/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class RemovePropertiesArg{
        /**
            field: path: A unique identifier for the file.
            field: property_template_ids: A list of identifiers for a property
                template created by route properties/template/add.
        */

    public:
        RemovePropertiesArg(){};

        RemovePropertiesArg(const QString& arg){ m_path = arg; };

    public:
        ///A unique identifier for the file.
        QString path()const{return m_path;};
        const RemovePropertiesArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///A list of identifiers for a property template created by route properties/template/add.
        const std::list <QString>& propertyTemplateIds()const{return m_property_template_ids;};
        const RemovePropertiesArg& setPropertytemplateids(const std::list <QString>&& arg){m_property_template_ids=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RemovePropertiesArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A unique identifier for the file.
        QString m_path;

        ///A list of identifiers for a property template created by route properties/template/add.
        std::list <QString> m_property_template_ids;

    };//RemovePropertiesArg

}//files
}//dropboxQt
