/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesSearchMode.h"
#include "dropbox/files/FilesSearchMode.h"

namespace dropboxQt{
namespace files{
    class SearchArg{
        /**
            field: path: The path in the user's Dropbox to search. Should
                probably be a folder.
            field: query: The string to search for. The search string is split
                on spaces into multiple tokens. For file name searching, the
                last token is used for prefix matching (i.e. "bat c" matches
                "bat cave" but not "batman car").
            field: start: The starting index within the search results (used for
                paging).
            field: max_results: The maximum number of search results to return.
            field: mode: The search mode (filename, filename_and_content, or
                deleted_filename). Note that searching file content is only
                available for Dropbox Business accounts.
        */

    public:
        SearchArg():
        m_start(0)
        ,m_max_results(100)
        ,m_mode(SearchMode::SearchMode_FILENAME)
        {};

        SearchArg(const QString& arg):
        m_start(0)
        ,m_max_results(100)
        ,m_mode(SearchMode::SearchMode_FILENAME)
        { m_path = arg; };

    public:
        ///The path in the user's Dropbox to search. Should probably be a folder.
        QString path()const{return m_path;};
        const SearchArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///The string to search for. The search string is split on spaces into multiple tokens. For file name searching, the last token is used for prefix matching (i.e. "bat c" matches "bat cave" but not "batman car").
        QString query()const{return m_query;};
        const SearchArg& setQuery(const QString& arg){m_query=arg; return *this;};

        ///The starting index within the search results (used for paging).
        int start()const{return m_start;};
        const SearchArg& setStart(const int& arg){m_start=arg; return *this;};

        ///The maximum number of search results to return.
        int maxResults()const{return m_max_results;};
        const SearchArg& setMaxresults(const int& arg){m_max_results=arg; return *this;};

        ///The search mode (filename, filename_and_content, or deleted_filename). Note that searching file content is only available for Dropbox Business accounts.
        SearchMode mode()const{return m_mode;};
        const SearchArg& setMode(const SearchMode& arg){m_mode=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SearchArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path in the user's Dropbox to search. Should probably be a folder.
        QString m_path;

        ///The string to search for. The search string is split on spaces into multiple tokens. For file name searching, the last token is used for prefix matching (i.e. "bat c" matches "bat cave" but not "batman car").
        QString m_query;

        ///The starting index within the search results (used for paging).
        int m_start;

        ///The maximum number of search results to return.
        int m_max_results;

        ///The search mode (filename, filename_and_content, or deleted_filename). Note that searching file content is only available for Dropbox Business accounts.
        SearchMode m_mode;

    };//SearchArg

}//files
}//dropboxQt
