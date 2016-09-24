/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class DeleteArg{
        /**
            field: path: Path in the user's Dropbox to delete.
        */

    public:
        DeleteArg(){};

        DeleteArg(const QString& arg){ m_path = arg; };

    public:
        ///Path in the user's Dropbox to delete.
        QString path()const{return m_path;};
        DeleteArg& setPath(const QString& arg){m_path=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static DeleteArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Path in the user's Dropbox to delete.
        QString m_path;

    };//DeleteArg

}//files
}//dropboxQt
