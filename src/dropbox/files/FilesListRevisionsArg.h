/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ListRevisionsArg{
        /**
            field: path: The path to the file you want to see the revisions of.
            field: limit: The maximum number of revision entries returned.
        */

    public:
        ListRevisionsArg():
        m_limit(10)
        {};

        ListRevisionsArg(const QString& arg):
        m_limit(10)
        { m_path = arg; };

    public:
        ///The path to the file you want to see the revisions of.
        QString path()const{return m_path;};
        ListRevisionsArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///The maximum number of revision entries returned.
        int limit()const{return m_limit;};
        ListRevisionsArg& setLimit(const int& arg){m_limit=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListRevisionsArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to the file you want to see the revisions of.
        QString m_path;

        ///The maximum number of revision entries returned.
        int m_limit;

    };//ListRevisionsArg

}//files
}//dropboxQt
