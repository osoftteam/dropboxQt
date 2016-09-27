/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class MembersListContinueError{
        /**
            field: invalid_cursor: The cursor is invalid.
        */
    public:
        enum Tag{

		/*The cursor is invalid.*/
		MembersListContinueError_INVALID_CURSOR,
		/*None*/
		MembersListContinueError_OTHER
        };

        MembersListContinueError(){}
        MembersListContinueError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<MembersListContinueError>  create(const QByteArray& data);
            static std::unique_ptr<MembersListContinueError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static MembersListContinueError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//MembersListContinueError

}//team
}//dropboxQt
