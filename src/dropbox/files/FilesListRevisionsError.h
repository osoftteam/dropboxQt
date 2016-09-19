/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"

namespace dropboxQt{
namespace files{
    class ListRevisionsError{
    public:
        enum Tag{

		/*None*/
		ListRevisionsError_PATH,
		/*None*/
		ListRevisionsError_OTHER
        };

        ListRevisionsError(){}
        ListRevisionsError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        LookupError getPath()const{DBOX_CHECK_STATE((ListRevisionsError_PATH == m_tag), "expected tag: ListRevisionsError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListRevisionsError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path;
    };//ListRevisionsError

}//files
}//dropboxQt
