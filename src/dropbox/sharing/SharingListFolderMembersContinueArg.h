/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class ListFolderMembersContinueArg{
        /**
            field: cursor: The cursor returned by your last call to
                :meth:`list_folder_members` or
                :meth:`list_folder_members_continue`.
        */

    public:
        ListFolderMembersContinueArg(){};

        ListFolderMembersContinueArg(const QString& arg){ m_cursor = arg; };

    public:
        ///The cursor returned by your last call to :route:`list_folder_members` or :route:`list_folder_members/continue`.
        QString cursor()const{return m_cursor;};
        ListFolderMembersContinueArg& setCursor(const QString& arg){m_cursor=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<ListFolderMembersContinueArg>  create(const QByteArray& data);
            static std::unique_ptr<ListFolderMembersContinueArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderMembersContinueArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The cursor returned by your last call to :route:`list_folder_members` or :route:`list_folder_members/continue`.
        QString m_cursor;

    };//ListFolderMembersContinueArg

}//sharing
}//dropboxQt
