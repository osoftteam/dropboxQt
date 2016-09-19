/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class TeamSpaceAllocation{
        /**
            field: used: The total space currently used by the user's team
                (bytes).
            field: allocated: The total space allocated to the user's team
                (bytes).
        */

    public:
        TeamSpaceAllocation(){};

        TeamSpaceAllocation(const int& arg){ m_used = arg; };

    public:
        ///The total space currently used by the user's team (bytes).
        int used()const{return m_used;};
        const TeamSpaceAllocation& setUsed(const int& arg){m_used=arg; return *this;};

        ///The total space allocated to the user's team (bytes).
        int allocated()const{return m_allocated;};
        const TeamSpaceAllocation& setAllocated(const int& arg){m_allocated=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static TeamSpaceAllocation EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The total space currently used by the user's team (bytes).
        int m_used;

        ///The total space allocated to the user's team (bytes).
        int m_allocated;

    };//TeamSpaceAllocation

}//users
}//dropboxQt
