/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class RemovedStatus{
        /**
            field: is_recoverable: True if the removed team member is
                recoverable
        */

    public:
        RemovedStatus(){};

        RemovedStatus(const bool& arg){ m_is_recoverable = arg; };

    public:
        ///True if the removed team member is recoverable
        bool isRecoverable()const{return m_is_recoverable;};
        const RemovedStatus& setIsrecoverable(const bool& arg){m_is_recoverable=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RemovedStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///True if the removed team member is recoverable
        bool m_is_recoverable;

    };//RemovedStatus

}//team
}//dropboxQt
