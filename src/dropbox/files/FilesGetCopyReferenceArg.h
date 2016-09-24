/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class GetCopyReferenceArg{
        /**
            field: path: The path to the file or folder you want to get a copy
                reference to.
        */

    public:
        GetCopyReferenceArg(){};

        GetCopyReferenceArg(const QString& arg){ m_path = arg; };

    public:
        ///The path to the file or folder you want to get a copy reference to.
        QString path()const{return m_path;};
        GetCopyReferenceArg& setPath(const QString& arg){m_path=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetCopyReferenceArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to the file or folder you want to get a copy reference to.
        QString m_path;

    };//GetCopyReferenceArg

}//files
}//dropboxQt
