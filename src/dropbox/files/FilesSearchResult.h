/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesSearchMatch.h"

namespace dropboxQt{
namespace files{
    class SearchResult{
        /**
            field: matches: A list (possibly empty) of matches for the query.
            field: more: Used for paging. If true, indicates there is another
                page of results available that can be fetched by calling
                :meth:`search` again.
            field: start: Used for paging. Value to set the start argument to
                when calling :meth:`search` to fetch the next page of results.
        */

    public:
        SearchResult(){};

        SearchResult(const std::list <SearchMatch>&& arg){ m_matches = arg; };

    public:
        ///A list (possibly empty) of matches for the query.
        const std::list <SearchMatch>& matches()const{return m_matches;};

        ///Used for paging. If true, indicates there is another page of results available that can be fetched by calling :route:`search` again.
        bool more()const{return m_more;};

        ///Used for paging. Value to set the start argument to when calling :route:`search` to fetch the next page of results.
        int start()const{return m_start;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SearchResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A list (possibly empty) of matches for the query.
        std::list <SearchMatch> m_matches;

        ///Used for paging. If true, indicates there is another page of results available that can be fetched by calling :route:`search` again.
        bool m_more;

        ///Used for paging. Value to set the start argument to when calling :route:`search` to fetch the next page of results.
        int m_start;

    };//SearchResult

}//files
}//dropboxQt
