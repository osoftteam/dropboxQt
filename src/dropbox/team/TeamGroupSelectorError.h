/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class GroupSelectorError{
        /**
            Error that can be raised when :class:`GroupSelector` is used.

            field: group_not_found: No matching group found. No groups match the
                specified group ID.
        */
    public:
        enum Tag{

		/*No matching group found. No groups match the specified group ID.*/
		GroupSelectorError_GROUP_NOT_FOUND,
		/*None*/
		GroupSelectorError_OTHER
        };

        GroupSelectorError(){}
        GroupSelectorError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupSelectorError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupSelectorError

}//team
}//dropboxQt
