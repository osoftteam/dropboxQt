/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class RelocationArg{
        /**
            field: from_path: Path in the user's Dropbox to be copied or moved.
            field: to_path: Path in the user's Dropbox that is the destination.
        */

    public:
        RelocationArg(){};

        RelocationArg(const QString& arg){ m_from_path = arg; };

    public:
        ///Path in the user's Dropbox to be copied or moved.
        QString fromPath()const{return m_from_path;};
        RelocationArg& setFrompath(const QString& arg){m_from_path=arg; return *this;};

        ///Path in the user's Dropbox that is the destination.
        QString toPath()const{return m_to_path;};
        RelocationArg& setTopath(const QString& arg){m_to_path=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RelocationArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Path in the user's Dropbox to be copied or moved.
        QString m_from_path;

        ///Path in the user's Dropbox that is the destination.
        QString m_to_path;

    };//RelocationArg

}//files
}//dropboxQt
