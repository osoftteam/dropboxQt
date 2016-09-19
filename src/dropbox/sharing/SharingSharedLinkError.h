/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class SharedLinkError{
        /**
            field: shared_link_not_found: The shared link wasn't found
            field: shared_link_access_denied: The caller is not allowed to
                access this shared link
        */
    public:
        enum Tag{

		/*The shared link wasn't found*/
		SharedLinkError_SHARED_LINK_NOT_FOUND,
		/*The caller is not allowed to access this shared link*/
		SharedLinkError_SHARED_LINK_ACCESS_DENIED,
		/*None*/
		SharedLinkError_OTHER
        };

        SharedLinkError(){}
        SharedLinkError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedLinkError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//SharedLinkError

}//sharing
}//dropboxQt
