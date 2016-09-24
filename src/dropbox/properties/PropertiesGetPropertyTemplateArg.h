/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace properties{
    class GetPropertyTemplateArg{
        /**
            field: template_id: An identifier for property template added by
                route properties/template/add.
        */

    public:
        GetPropertyTemplateArg(){};

        GetPropertyTemplateArg(const QString& arg){ m_template_id = arg; };

    public:
        ///An identifier for property template added by route properties/template/add.
        QString templateId()const{return m_template_id;};
        GetPropertyTemplateArg& setTemplateid(const QString& arg){m_template_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetPropertyTemplateArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///An identifier for property template added by route properties/template/add.
        QString m_template_id;

    };//GetPropertyTemplateArg

}//properties
}//dropboxQt
