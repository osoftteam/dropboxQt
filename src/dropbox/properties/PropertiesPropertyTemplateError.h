/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace properties{
    class PropertyTemplateError{
        /**
            field: template_not_found: Property template does not exist for
                given identifier.
            field: restricted_content: You do not have the permissions to modify
                this property template.
        */
    public:
        enum Tag{

		/*Property template does not exist for given identifier.*/
		PropertyTemplateError_TEMPLATE_NOT_FOUND,
		/*You do not have the permissions to modify this property template.*/
		PropertyTemplateError_RESTRICTED_CONTENT,
		/*None*/
		PropertyTemplateError_OTHER
        };

        PropertyTemplateError(){}
        PropertyTemplateError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Property template does not exist for given identifier.
        QString getTemplateNotFound()const{DBOX_CHECK_STATE((PropertyTemplateError_TEMPLATE_NOT_FOUND == m_tag), "expected tag: PropertyTemplateError_TEMPLATE_NOT_FOUND", m_tag);return m_template_not_found;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PropertyTemplateError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_template_not_found;
    };//PropertyTemplateError

}//properties
}//dropboxQt
