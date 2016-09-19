/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class ListSharedLinksArg{
        /**
            field: path: See :meth:`list_shared_links` description.
            field: cursor: The cursor returned by your last call to
                :meth:`list_shared_links`.
            field: direct_only: See :meth:`list_shared_links` description.
        */

    public:
        ListSharedLinksArg(){};

        ListSharedLinksArg(const QString& arg){ m_path = arg; };

    public:
        ///See :route:`list_shared_links` description.
        QString path()const{return m_path;};
        const ListSharedLinksArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///The cursor returned by your last call to :route:`list_shared_links`.
        QString cursor()const{return m_cursor;};
        const ListSharedLinksArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

        ///See :route:`list_shared_links` description.
        bool directOnly()const{return m_direct_only;};
        const ListSharedLinksArg& setDirectonly(const bool& arg){m_direct_only=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListSharedLinksArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///See :route:`list_shared_links` description.
        QString m_path;

        ///The cursor returned by your last call to :route:`list_shared_links`.
        QString m_cursor;

        ///See :route:`list_shared_links` description.
        bool m_direct_only;

    };//ListSharedLinksArg

}//sharing
}//dropboxQt
