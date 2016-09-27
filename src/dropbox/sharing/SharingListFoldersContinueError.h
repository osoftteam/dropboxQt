/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class ListFoldersContinueError{
        /**
            field: invalid_cursor: ``ListFoldersContinueArg.cursor`` is invalid.
        */
    public:
        enum Tag{

		/*:field:`ListFoldersContinueArg.cursor` is invalid.*/
		ListFoldersContinueError_INVALID_CURSOR,
		/*None*/
		ListFoldersContinueError_OTHER
        };

        ListFoldersContinueError(){}
        ListFoldersContinueError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<ListFoldersContinueError>  create(const QByteArray& data);
            static std::unique_ptr<ListFoldersContinueError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static ListFoldersContinueError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//ListFoldersContinueError

}//sharing
}//dropboxQt
