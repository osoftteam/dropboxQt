/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class MobileClientPlatform{
        /**
            field: iphone: Official Dropbox iPhone client
            field: ipad: Official Dropbox iPad client
            field: android: Official Dropbox Android client
            field: windows_phone: Official Dropbox Windows phone client
            field: blackberry: Official Dropbox Blackberry client
        */
    public:
        enum Tag{

		/*Official Dropbox iPhone client*/
		MobileClientPlatform_IPHONE,
		/*Official Dropbox iPad client*/
		MobileClientPlatform_IPAD,
		/*Official Dropbox Android client*/
		MobileClientPlatform_ANDROID,
		/*Official Dropbox Windows phone client*/
		MobileClientPlatform_WINDOWS_PHONE,
		/*Official Dropbox Blackberry client*/
		MobileClientPlatform_BLACKBERRY,
		/*None*/
		MobileClientPlatform_OTHER
        };

        MobileClientPlatform(){}
        MobileClientPlatform(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MobileClientPlatform EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//MobileClientPlatform

}//team
}//dropboxQt
