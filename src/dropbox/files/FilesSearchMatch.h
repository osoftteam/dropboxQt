/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesSearchMatchType.h"
#include "dropbox/files/FilesSearchMatchType.h"
#include "dropbox/files/FilesMetadata.h"

namespace dropboxQt{
namespace files{
    class SearchMatch{
        /**
            field: match_type: The type of the match.
            field: metadata: The metadata for the matched file or folder.
        */

    public:
        SearchMatch(){};

        SearchMatch(const SearchMatchType& arg){ m_match_type = arg; };

    public:
        ///The type of the match.
        SearchMatchType matchType()const{return m_match_type;};
        SearchMatch& setMatchtype(const SearchMatchType& arg){m_match_type=arg; return *this;};

        ///The metadata for the matched file or folder.
        Metadata metadata()const{return m_metadata;};
        SearchMatch& setMetadata(const Metadata& arg){m_metadata=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SearchMatch EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The type of the match.
        SearchMatchType m_match_type;

        ///The metadata for the matched file or folder.
        Metadata m_metadata;

    };//SearchMatch

}//files
}//dropboxQt
