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
        RelinquishFileMembershipArg& setFile(const QString& arg){m_file=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RelinquishFileMembershipArg>  create(const QByteArray& data);
            static std::unique_ptr<RelinquishFileMembershipArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static RelinquishFileMembershipArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path or id for the file.
        QString m_file;

    };//RelinquishFileMembershipArg

}//sharing
}//dropboxQt
