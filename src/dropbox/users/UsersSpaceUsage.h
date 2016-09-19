/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/users/UsersSpaceAllocation.h"
#include "dropbox/users/UsersSpaceAllocation.h"

namespace dropboxQt{
namespace users{
    class SpaceUsage{
        /**
            Information about a user's space usage and quota.

            field: used: The user's total space usage (bytes).
            field: allocation: The user's space allocation.
        */

    public:
        SpaceUsage(){};

        SpaceUsage(const int& arg){ m_used = arg; };

    public:
        ///The user's total space usage (bytes).
        int used()const{return m_used;};
        const SpaceUsage& setUsed(const int& arg){m_used=arg; return *this;};

        ///The user's space allocation.
        SpaceAllocation allocation()const{return m_allocation;};
        const SpaceUsage& setAllocation(const SpaceAllocation& arg){m_allocation=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SpaceUsage EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The user's total space usage (bytes).
        int m_used;

        ///The user's space allocation.
        SpaceAllocation m_allocation;

    };//SpaceUsage

}//users
}//dropboxQt
