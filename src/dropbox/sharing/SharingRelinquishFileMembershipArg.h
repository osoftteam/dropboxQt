/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class RelinquishFileMembershipArg{
        /**
            field: file: The path or id for the file.
        */

    public:
        RelinquishFileMembershipArg(){};

        RelinquishFileMembershipArg(const QString& arg){ m_file = arg; };

    public:
        ///The path or id for the file.
        QString file()const{return m_file;};
        RelinquishFileMembershipArg& setFile(const QString& arg){m_file=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RelinquishFileMembershipArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path or id for the file.
        QString m_file;

    };//RelinquishFileMembershipArg

}//sharing
}//dropboxQt
