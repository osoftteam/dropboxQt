/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class StorageBucket{
        /**
            Describes the number of users in a specific storage bucket.

            field: bucket: The name of the storage bucket. For example, '1G' is
                a bucket of users with storage size up to 1 Giga.
            field: users: The number of people whose storage is in the range of
                this storage bucket.
        */

    public:
        StorageBucket(){};

        StorageBucket(const QString& arg){ m_bucket = arg; };

    public:
        ///The name of the storage bucket. For example, '1G' is a bucket of users with storage size up to 1 Giga.
        QString bucket()const{return m_bucket;};
        const StorageBucket& setBucket(const QString& arg){m_bucket=arg; return *this;};

        ///The number of people whose storage is in the range of this storage bucket.
        int users()const{return m_users;};
        const StorageBucket& setUsers(const int& arg){m_users=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static StorageBucket EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The name of the storage bucket. For example, '1G' is a bucket of users with storage size up to 1 Giga.
        QString m_bucket;

        ///The number of people whose storage is in the range of this storage bucket.
        int m_users;

    };//StorageBucket

}//team
}//dropboxQt
