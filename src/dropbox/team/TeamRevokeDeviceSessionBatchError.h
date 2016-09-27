/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class RevokeDeviceSessionBatchError{
    public:
        enum Tag{

		/*None*/
		RevokeDeviceSessionBatchError_OTHER
        };

        RevokeDeviceSessionBatchError(){}
        RevokeDeviceSessionBatchError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RevokeDeviceSessionBatchError>  create(const QByteArray& data);
            static std::unique_ptr<RevokeDeviceSessionBatchError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeDeviceSessionBatchError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//RevokeDeviceSessionBatchError

}//team
}//dropboxQt
