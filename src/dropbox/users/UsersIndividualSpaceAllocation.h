/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class IndividualSpaceAllocation{
        /**
            field: allocated: The total space allocated to the user's account
                (bytes).
        */

    public:
        IndividualSpaceAllocation(){};

        IndividualSpaceAllocation(const int& arg){ m_allocated = arg; };

    public:
        ///The total space allocated to the user's account (bytes).
        int allocated()const{return m_allocated;};
        const IndividualSpaceAllocation& setAllocated(const int& arg){m_allocated=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static IndividualSpaceAllocation EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The total space allocated to the user's account (bytes).
        int m_allocated;

    };//IndividualSpaceAllocation

}//users
}//dropboxQt
