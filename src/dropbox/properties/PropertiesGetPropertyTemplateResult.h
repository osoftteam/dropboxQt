/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/properties/PropertiesPropertyGroupTemplate.h"

namespace dropboxQt{
namespace properties{
    class GetPropertyTemplateResult : public PropertyGroupTemplate{
        /**
            The Property template for the specified template.
        */

    public:
        GetPropertyTemplateResult(){};


    public:
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetPropertyTemplateResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
    };//GetPropertyTemplateResult

}//properties
}//dropboxQt
