/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/properties/PropertiesPropertyGroupTemplate.h"

namespace dropboxQt{
namespace team{
    class AddPropertyTemplateArg : public properties::PropertyGroupTemplate{
        /**
            Arguments for adding property templates.
        */

    public:
        AddPropertyTemplateArg(){};


    public:
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AddPropertyTemplateArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
    };//AddPropertyTemplateArg

}//team
}//dropboxQt
