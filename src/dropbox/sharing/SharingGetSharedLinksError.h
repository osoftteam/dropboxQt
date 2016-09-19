/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class GetSharedLinksError{
    public:
        enum Tag{

		/*None*/
		GetSharedLinksError_PATH,
		/*None*/
		GetSharedLinksError_OTHER
        };

        GetSharedLinksError(){}
        GetSharedLinksError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        QString getPath()const{DBOX_CHECK_STATE((GetSharedLinksError_PATH == m_tag), "expected tag: GetSharedLinksError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetSharedLinksError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_path;
    };//GetSharedLinksError

}//sharing
}//dropboxQt
