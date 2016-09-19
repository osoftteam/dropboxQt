/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesWriteMode.h"
#include "dropbox/files/FilesWriteMode.h"

namespace dropboxQt{
namespace files{
    class CommitInfo{
        /**
            field: path: Path in the user's Dropbox to save the file.
            field: mode: Selects what to do if the file already exists.
            field: autorename: If there's a conflict, as determined by ``mode``,
                have the Dropbox server try to autorename the file to avoid
                conflict.
            field: client_modified: The value to store as the
                ``client_modified`` timestamp. Dropbox automatically records the
                time at which the file was written to the Dropbox servers. It
                can also record an additional timestamp, provided by Dropbox
                desktop clients, mobile clients, and API apps of when the file
                was actually created or modified.
            field: mute: Normally, users are made aware of any file
                modifications in their Dropbox account via notifications in the
                client software. If ``True``, this tells the clients that this
                modification shouldn't result in a user notification.
        */

    public:
        CommitInfo():
        m_mode(WriteMode::WriteMode_ADD)
        ,m_autorename(false)
        ,m_mute(false)
        {};

        CommitInfo(const QString& arg):
        m_mode(WriteMode::WriteMode_ADD)
        ,m_autorename(false)
        ,m_mute(false)
        { m_path = arg; };

    public:
        ///Path in the user's Dropbox to save the file.
        QString path()const{return m_path;};
        const CommitInfo& setPath(const QString& arg){m_path=arg; return *this;};

        ///Selects what to do if the file already exists.
        WriteMode mode()const{return m_mode;};
        const CommitInfo& setMode(const WriteMode& arg){m_mode=arg; return *this;};

        ///If there's a conflict, as determined by :field:`mode`, have the Dropbox server try to autorename the file to avoid conflict.
        bool autorename()const{return m_autorename;};
        const CommitInfo& setAutorename(const bool& arg){m_autorename=arg; return *this;};

        ///The value to store as the :field:`client_modified` timestamp. Dropbox automatically records the time at which the file was written to the Dropbox servers. It can also record an additional timestamp, provided by Dropbox desktop clients, mobile clients, and API apps of when the file was actually created or modified.
        QDateTime clientModified()const{return m_client_modified;};
        const CommitInfo& setClientmodified(const QDateTime& arg){m_client_modified=arg; return *this;};

        ///Normally, users are made aware of any file modifications in their Dropbox account via notifications in the client software. If :val:`true`, this tells the clients that this modification shouldn't result in a user notification.
        bool mute()const{return m_mute;};
        const CommitInfo& setMute(const bool& arg){m_mute=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static CommitInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Path in the user's Dropbox to save the file.
        QString m_path;

        ///Selects what to do if the file already exists.
        WriteMode m_mode;

        ///If there's a conflict, as determined by :field:`mode`, have the Dropbox server try to autorename the file to avoid conflict.
        bool m_autorename;

        ///The value to store as the :field:`client_modified` timestamp. Dropbox automatically records the time at which the file was written to the Dropbox servers. It can also record an additional timestamp, provided by Dropbox desktop clients, mobile clients, and API apps of when the file was actually created or modified.
        QDateTime m_client_modified;

        ///Normally, users are made aware of any file modifications in their Dropbox account via notifications in the client software. If :val:`true`, this tells the clients that this modification shouldn't result in a user notification.
        bool m_mute;

    };//CommitInfo

}//files
}//dropboxQt
