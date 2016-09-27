/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class GroupCreateError{
        /**
            field: group_name_already_used: There is already an existing group
                with the requested name.
            field: group_name_invalid: Group name is empty or has invalid
                characters.
            field: external_id_already_in_use: The new external ID is already
                being used by another group.
        */
    public:
        enum Tag{

		/*There is already an existing group with the requested name.*/
		GroupCreateError_GROUP_NAME_ALREADY_USED,
		/*Group name is empty or has invalid characters.*/
		GroupCreateError_GROUP_NAME_INVALID,
		/*The new external ID is already being used by another group.*/
		GroupCreateError_EXTERNAL_ID_ALREADY_IN_USE,
		/*None*/
		GroupCreateError_OTHER
        };

        GroupCreateError(){}
        GroupCreateError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GroupCreateError>  create(const QByteArray& data);
            static std::unique_ptr<GroupCreateError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static GroupCreateError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupCreateError

}//team
}//dropboxQt
