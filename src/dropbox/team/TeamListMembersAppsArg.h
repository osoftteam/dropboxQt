/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListMembersAppsArg{
        /**
            Arguments for :meth:`linked_apps_list_members_linked_apps`.

            field: cursor: At the first call to the
                :meth:`linked_apps_list_members_linked_apps` the cursor
                shouldn't be passed. Then, if the result of the call includes a
                cursor, the following requests should include the received
                cursors in order to receive the next sub list of the team
                applications
        */

    public:
        ListMembersAppsArg(){};

        ListMembersAppsArg(const QString& arg){ m_cursor = arg; };

    public:
        ///At the first call to the :route:`linked_apps/list_members_linked_apps` the cursor shouldn't be passed. Then, if the result of the call includes a cursor, the following requests should include the received cursors in order to receive the next sub list of the team applications
        QString cursor()const{return m_cursor;};
        const ListMembersAppsArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMembersAppsArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///At the first call to the :route:`linked_apps/list_members_linked_apps` the cursor shouldn't be passed. Then, if the result of the call includes a cursor, the following requests should include the received cursors in order to receive the next sub list of the team applications
        QString m_cursor;

    };//ListMembersAppsArg

}//team
}//dropboxQt
