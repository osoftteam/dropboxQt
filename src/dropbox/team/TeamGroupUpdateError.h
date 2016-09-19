/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupSelectorError.h"

namespace dropboxQt{
namespace team{
    class GroupUpdateError{
        /**
            field: external_id_already_in_use: The new external ID is already
                being used by another group.
        */
    public:
        enum Tag{

		/*No matching group found. No groups match the specified group ID.*/
		GroupSelectorError_GROUP_NOT_FOUND,
		/*None*/
		GroupSelectorError_OTHER,
		/*The new external ID is already being used by another group.*/
		GroupUpdateError_EXTERNAL_ID_ALREADY_IN_USE
        };

        GroupUpdateError(){}
        GroupUpdateError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupUpdateError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupUpdateError

}//team
}//dropboxQt
