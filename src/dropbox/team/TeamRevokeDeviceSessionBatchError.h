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
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeDeviceSessionBatchError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//RevokeDeviceSessionBatchError

}//team
}//dropboxQt
