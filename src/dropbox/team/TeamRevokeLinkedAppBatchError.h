/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class RevokeLinkedAppBatchError{
        /**
            Error returned by :meth:`linked_apps_revoke_linked_app_batch`.
        */
    public:
        enum Tag{

		/*None*/
		RevokeLinkedAppBatchError_OTHER
        };

        RevokeLinkedAppBatchError(){}
        RevokeLinkedAppBatchError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RevokeLinkedAppBatchError>  create(const QByteArray& data);
            static std::unique_ptr<RevokeLinkedAppBatchError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeLinkedAppBatchError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//RevokeLinkedAppBatchError

}//team
}//dropboxQt
