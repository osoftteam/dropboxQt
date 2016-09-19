/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class GetMetadataArg{
        /**
            field: path: The path of a file or folder on Dropbox.
            field: include_media_info: If true, ``FileMetadata.media_info`` is
                set for photo and video.
            field: include_deleted: If true, :class:`DeletedMetadata` will be
                returned for deleted file or folder, otherwise
                ``LookupError.not_found`` will be returned.
            field: include_has_explicit_shared_members: If true, the results
                will include a flag for each file indicating whether or not
                that file has any explicit members.
        */

    public:
        GetMetadataArg():
        m_include_media_info(false)
        ,m_include_deleted(false)
        ,m_include_has_explicit_shared_members(false)
        {};

        GetMetadataArg(const QString& arg):
        m_include_media_info(false)
        ,m_include_deleted(false)
        ,m_include_has_explicit_shared_members(false)
        { m_path = arg; };

    public:
        ///The path of a file or folder on Dropbox.
        QString path()const{return m_path;};
        const GetMetadataArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///If true, :field:`FileMetadata.media_info` is set for photo and video.
        bool includeMediaInfo()const{return m_include_media_info;};
        const GetMetadataArg& setIncludemediainfo(const bool& arg){m_include_media_info=arg; return *this;};

        ///If true, :type:`DeletedMetadata` will be returned for deleted file or folder, otherwise :field:`LookupError.not_found` will be returned.
        bool includeDeleted()const{return m_include_deleted;};
        const GetMetadataArg& setIncludedeleted(const bool& arg){m_include_deleted=arg; return *this;};

        ///If true, the results will include a flag for each file indicating whether or not  that file has any explicit members.
        bool includeHasExplicitSharedMembers()const{return m_include_has_explicit_shared_members;};
        const GetMetadataArg& setIncludehasexplicitsharedmembers(const bool& arg){m_include_has_explicit_shared_members=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetMetadataArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path of a file or folder on Dropbox.
        QString m_path;

        ///If true, :field:`FileMetadata.media_info` is set for photo and video.
        bool m_include_media_info;

        ///If true, :type:`DeletedMetadata` will be returned for deleted file or folder, otherwise :field:`LookupError.not_found` will be returned.
        bool m_include_deleted;

        ///If true, the results will include a flag for each file indicating whether or not  that file has any explicit members.
        bool m_include_has_explicit_shared_members;

    };//GetMetadataArg

}//files
}//dropboxQt
