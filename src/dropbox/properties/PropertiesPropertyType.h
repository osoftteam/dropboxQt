/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace properties{
    class PropertyType{
        /**
            Data type of the given property added. This endpoint is in beta and
            only properties of type strings is supported.

            field: string: The associated property will be of type string.
                Unicode is supported.
        */
    public:
        enum Tag{

		/*The associated property will be of type string. Unicode is supported.*/
		PropertyType_STRING,
		/*None*/
		PropertyType_OTHER
        };

        PropertyType(){}
        PropertyType(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PropertyType EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//PropertyType

}//properties
}//dropboxQt
