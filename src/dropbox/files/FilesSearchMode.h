/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class SearchMode{
        /**
            field: filename: Search file and folder names.
            field: filename_and_content: Search file and folder names as well as
                file contents.
            field: deleted_filename: Search for deleted file and folder names.
        */
    public:
        enum Tag{

		/*Search file and folder names.*/
		SearchMode_FILENAME,
		/*Search file and folder names as well as file contents.*/
		SearchMode_FILENAME_AND_CONTENT,
		/*Search for deleted file and folder names.*/
		SearchMode_DELETED_FILENAME
        };

        SearchMode(){}
        SearchMode(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SearchMode EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//SearchMode

}//files
}//dropboxQt
