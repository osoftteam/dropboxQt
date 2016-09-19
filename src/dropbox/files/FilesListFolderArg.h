/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ListFolderArg{
        /**
            field: path: The path to the folder you want to see the contents of.
            field: recursive: If true, the list folder operation will be applied
                recursively to all subfolders and the response will contain
                contents of all subfolders.
            field: include_media_info: If true, ``FileMetadata.media_info`` is
                set for photo and video.
            field: include_deleted: If true, the results will include entries
                for files and folders that used to exist but were deleted.
            field: include_has_explicit_shared_members: If true, the results
                will include a flag for each file indicating whether or not
                that file has any explicit members.
        */

    public:
        ListFolderArg():
        m_recursive(false)
        ,m_include_media_info(false)
        ,m_include_deleted(false)
        ,m_include_has_explicit_shared_members(false)
        {};

        ListFolderArg(const QString& arg):
        m_recursive(false)
        ,m_include_media_info(false)
        ,m_include_deleted(false)
        ,m_include_has_explicit_shared_members(false)
        { m_path = arg; };

    public:
        ///The path to the folder you want to see the contents of.
        QString path()const{return m_path;};
        const ListFolderArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///If true, the list folder operation will be applied recursively to all subfolders and the response will contain contents of all subfolders.
        bool recursive()const{return m_recursive;};
        const ListFolderArg& setRecursive(const bool& arg){m_recursive=arg; return *this;};

        ///If true, :field:`FileMetadata.media_info` is set for photo and video.
        bool includeMediaInfo()const{return m_include_media_info;};
        const ListFolderArg& setIncludemediainfo(const bool& arg){m_include_media_info=arg; return *this;};

        ///If true, the results will include entries for files and folders that used to exist but were deleted.
        bool includeDeleted()const{return m_include_deleted;};
        const ListFolderArg& setIncludedeleted(const bool& arg){m_include_deleted=arg; return *this;};

        ///If true, the results will include a flag for each file indicating whether or not  that file has any explicit members.
        bool includeHasExplicitSharedMembers()const{return m_include_has_explicit_shared_members;};
        const ListFolderArg& setIncludehasexplicitsharedmembers(const bool& arg){m_include_has_explicit_shared_members=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to the folder you want to see the contents of.
        QString m_path;

        ///If true, the list folder operation will be applied recursively to all subfolders and the response will contain contents of all subfolders.
        bool m_recursive;

        ///If true, :field:`FileMetadata.media_info` is set for photo and video.
        bool m_include_media_info;

        ///If true, the results will include entries for files and folders that used to exist but were deleted.
        bool m_include_deleted;

        ///If true, the results will include a flag for each file indicating whether or not  that file has any explicit members.
        bool m_include_has_explicit_shared_members;

    };//ListFolderArg

}//files
}//dropboxQt
