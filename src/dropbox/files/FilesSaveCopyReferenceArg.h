/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class SaveCopyReferenceArg{
        /**
            field: copy_reference: A copy reference returned by
                :meth:`copy_reference_get`.
            field: path: Path in the user's Dropbox that is the destination.
        */

    public:
        SaveCopyReferenceArg(){};

        SaveCopyReferenceArg(const QString& arg){ m_copy_reference = arg; };

    public:
        ///A copy reference returned by :route:`copy_reference/get`.
        QString copyReference()const{return m_copy_reference;};
        SaveCopyReferenceArg& setCopyreference(const QString& arg){m_copy_reference=arg; return *this;};

        ///Path in the user's Dropbox that is the destination.
        QString path()const{return m_path;};
        SaveCopyReferenceArg& setPath(const QString& arg){m_path=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SaveCopyReferenceArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A copy reference returned by :route:`copy_reference/get`.
        QString m_copy_reference;

        ///Path in the user's Dropbox that is the destination.
        QString m_path;

    };//SaveCopyReferenceArg

}//files
}//dropboxQt
