/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class RevokeDeviceSessionError{
        /**
            field: device_session_not_found: Device session not found.
            field: member_not_found: Member not found.
        */
    public:
        enum Tag{

		/*Device session not found.*/
		RevokeDeviceSessionError_DEVICE_SESSION_NOT_FOUND,
		/*Member not found.*/
		RevokeDeviceSessionError_MEMBER_NOT_FOUND,
		/*None*/
		RevokeDeviceSessionError_OTHER
        };

        RevokeDeviceSessionError(){}
        RevokeDeviceSessionError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeDeviceSessionError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//RevokeDeviceSessionError

}//team
}//dropboxQt
