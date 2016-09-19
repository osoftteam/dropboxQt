/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class RestoreArg{
        /**
            field: path: The path to the file you want to restore.
            field: rev: The revision to restore for the file.
        */

    public:
        RestoreArg(){};

        RestoreArg(const QString& arg){ m_path = arg; };

    public:
        ///The path to the file you want to restore.
        QString path()const{return m_path;};
        const RestoreArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///The revision to restore for the file.
        QString rev()const{return m_rev;};
        const RestoreArg& setRev(const QString& arg){m_rev=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RestoreArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to the file you want to restore.
        QString m_path;

        ///The revision to restore for the file.
        QString m_rev;

    };//RestoreArg

}//files
}//dropboxQt
