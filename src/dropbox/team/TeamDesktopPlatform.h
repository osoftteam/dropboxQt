/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class DesktopPlatform{
        /**
            field: windows: Official Windows Dropbox desktop client
            field: mac: Official Mac Dropbox desktop client
            field: linux: Official Linux Dropbox desktop client
        */
    public:
        enum Tag{

		/*Official Windows Dropbox desktop client*/
		DesktopPlatform_WINDOWS,
		/*Official Mac Dropbox desktop client*/
		DesktopPlatform_MAC,
		/*Official Linux Dropbox desktop client*/
		DesktopPlatform_LINUX,
		/*None*/
		DesktopPlatform_OTHER
        };

        DesktopPlatform(){}
        DesktopPlatform(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<DesktopPlatform>  create(const QByteArray& data);
            static std::unique_ptr<DesktopPlatform>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static DesktopPlatform EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//DesktopPlatform

}//team
}//dropboxQt
