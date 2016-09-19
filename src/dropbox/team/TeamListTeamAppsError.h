/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListTeamAppsError{
        /**
            Error returned by :meth:`linked_apps_list_team_linked_apps`

            field: reset: Indicates that the cursor has been invalidated. Call
                :meth:`linked_apps_list_team_linked_apps` again with an empty
                cursor to obtain a new cursor.
        */
    public:
        enum Tag{

		/*Indicates that the cursor has been invalidated. Call :route:`linked_apps/list_team_linked_apps` again with an empty cursor to obtain a new cursor.*/
		ListTeamAppsError_RESET,
		/*None*/
		ListTeamAppsError_OTHER
        };

        ListTeamAppsError(){}
        ListTeamAppsError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListTeamAppsError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//ListTeamAppsError

}//team
}//dropboxQt
