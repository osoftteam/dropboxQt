/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class AddPropertyTemplateResult{
        /**
            field: template_id: An identifier for property template added by
                :meth:`properties_template_add`.
        */

    public:
        AddPropertyTemplateResult(){};

        AddPropertyTemplateResult(const QString& arg){ m_template_id = arg; };

    public:
        ///An identifier for property template added by :route:`properties/template/add`.
        QString templateId()const{return m_template_id;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AddPropertyTemplateResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///An identifier for property template added by :route:`properties/template/add`.
        QString m_template_id;

    };//AddPropertyTemplateResult

}//team
}//dropboxQt
