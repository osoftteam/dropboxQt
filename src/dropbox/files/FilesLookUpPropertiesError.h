/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class LookUpPropertiesError{
        /**
            field: property_group_not_found: This property group does not exist
                for this file.
        */
    public:
        enum Tag{

		/*This property group does not exist for this file.*/
		LookUpPropertiesError_PROPERTY_GROUP_NOT_FOUND
        };

        LookUpPropertiesError(){}
        LookUpPropertiesError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static LookUpPropertiesError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//LookUpPropertiesError

}//files
}//dropboxQt
