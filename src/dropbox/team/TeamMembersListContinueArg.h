/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class MembersListContinueArg{
        /**
            field: cursor: Indicates from what point to get the next set of
                members.
        */

    public:
        MembersListContinueArg(){};

        MembersListContinueArg(const QString& arg){ m_cursor = arg; };

    public:
        ///Indicates from what point to get the next set of members.
        QString cursor()const{return m_cursor;};
        MembersListContinueArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersListContinueArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Indicates from what point to get the next set of members.
        QString m_cursor;

    };//MembersListContinueArg

}//team
}//dropboxQt
