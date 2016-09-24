/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class ListFoldersContinueArg{
        /**
            field: cursor: The cursor returned by the previous API call
                specified in the endpoint description.
        */

    public:
        ListFoldersContinueArg(){};

        ListFoldersContinueArg(const QString& arg){ m_cursor = arg; };

    public:
        ///The cursor returned by the previous API call specified in the endpoint description.
        QString cursor()const{return m_cursor;};
        ListFoldersContinueArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFoldersContinueArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The cursor returned by the previous API call specified in the endpoint description.
        QString m_cursor;

    };//ListFoldersContinueArg

}//sharing
}//dropboxQt
