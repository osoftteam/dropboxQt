/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListMemberAppsError{
        /**
            Error returned by :meth:`linked_apps_list_member_linked_apps`.

            field: member_not_found: Member not found.
        */
    public:
        enum Tag{

		/*Member not found.*/
		ListMemberAppsError_MEMBER_NOT_FOUND,
		/*None*/
		ListMemberAppsError_OTHER
        };

        ListMemberAppsError(){}
        ListMemberAppsError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMemberAppsError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//ListMemberAppsError

}//team
}//dropboxQt
