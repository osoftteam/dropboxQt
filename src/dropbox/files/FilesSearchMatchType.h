/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class SearchMatchType{
        /**
            Indicates what type of match was found for a given item.

            field: filename: This item was matched on its file or folder name.
            field: content: This item was matched based on its file contents.
            field: both: This item was matched based on both its contents and
                its file name.
        */
    public:
        enum Tag{

		/*This item was matched on its file or folder name.*/
		SearchMatchType_FILENAME,
		/*This item was matched based on its file contents.*/
		SearchMatchType_CONTENT,
		/*This item was matched based on both its contents and its file name.*/
		SearchMatchType_BOTH
        };

        SearchMatchType(){}
        SearchMatchType(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SearchMatchType EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//SearchMatchType

}//files
}//dropboxQt
