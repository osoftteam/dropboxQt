/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class LookupError{
        /**
            field: not_found: There is nothing at the given path.
            field: not_file: We were expecting a file, but the given path refers
                to something that isn't a file.
            field: not_folder: We were expecting a folder, but the given path
                refers to something that isn't a folder.
            field: restricted_content: The file cannot be transferred because
                the content is restricted.  For example, sometimes there are
                legal restrictions due to copyright claims.
        */
    public:
        enum Tag{

		/*None*/
		LookupError_MALFORMED_PATH,
		/*There is nothing at the given path.*/
		LookupError_NOT_FOUND,
		/*We were expecting a file, but the given path refers to something that isn't a file.*/
		LookupError_NOT_FILE,
		/*We were expecting a folder, but the given path refers to something that isn't a folder.*/
		LookupError_NOT_FOLDER,
		/*The file cannot be transferred because the content is restricted.  For example, sometimes there are legal restrictions due to copyright claims.*/
		LookupError_RESTRICTED_CONTENT,
		/*None*/
		LookupError_OTHER
        };

        LookupError(){}
        LookupError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        QString getMalformedPath()const{DBOX_CHECK_STATE((LookupError_MALFORMED_PATH == m_tag), "expected tag: LookupError_MALFORMED_PATH", m_tag);return m_malformed_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static LookupError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_malformed_path;
    };//LookupError

}//files
}//dropboxQt
