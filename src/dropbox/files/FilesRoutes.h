/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/files/FilesAddPropertiesError.h"
#include "dropbox/files/FilesAlphaGetMetadataArg.h"
#include "dropbox/files/FilesAlphaGetMetadataError.h"
#include "dropbox/files/FilesCommitInfo.h"
#include "dropbox/files/FilesCommitInfoWithProperties.h"
#include "dropbox/files/FilesCreateFolderArg.h"
#include "dropbox/files/FilesCreateFolderError.h"
#include "dropbox/files/FilesDeleteArg.h"
#include "dropbox/files/FilesDeleteError.h"
#include "dropbox/files/FilesDownloadArg.h"
#include "dropbox/files/FilesDownloadError.h"
#include "dropbox/files/FilesFileMetadata.h"
#include "dropbox/files/FilesFolderMetadata.h"
#include "dropbox/files/FilesGetCopyReferenceArg.h"
#include "dropbox/files/FilesGetCopyReferenceError.h"
#include "dropbox/files/FilesGetCopyReferenceResult.h"
#include "dropbox/files/FilesGetMetadataArg.h"
#include "dropbox/files/FilesGetMetadataError.h"
#include "dropbox/properties/PropertiesGetPropertyTemplateArg.h"
#include "dropbox/properties/PropertiesGetPropertyTemplateResult.h"
#include "dropbox/files/FilesGetTemporaryLinkArg.h"
#include "dropbox/files/FilesGetTemporaryLinkError.h"
#include "dropbox/files/FilesGetTemporaryLinkResult.h"
#include "dropbox/files/FilesInvalidPropertyGroupError.h"
#include "dropbox/async/AsyncLaunchEmptyResult.h"
#include "dropbox/files/FilesListFolderArg.h"
#include "dropbox/files/FilesListFolderContinueArg.h"
#include "dropbox/files/FilesListFolderContinueError.h"
#include "dropbox/files/FilesListFolderError.h"
#include "dropbox/files/FilesListFolderGetLatestCursorResult.h"
#include "dropbox/files/FilesListFolderLongpollArg.h"
#include "dropbox/files/FilesListFolderLongpollError.h"
#include "dropbox/files/FilesListFolderLongpollResult.h"
#include "dropbox/files/FilesListFolderResult.h"
#include "dropbox/properties/PropertiesListPropertyTemplateIds.h"
#include "dropbox/files/FilesListRevisionsArg.h"
#include "dropbox/files/FilesListRevisionsError.h"
#include "dropbox/files/FilesListRevisionsResult.h"
#include "dropbox/files/FilesMetadata.h"
#include "dropbox/async/AsyncPollArg.h"
#include "dropbox/async/AsyncPollError.h"
#include "dropbox/files/FilesPreviewArg.h"
#include "dropbox/files/FilesPreviewError.h"
#include "dropbox/files/FilesPropertyGroupWithPath.h"
#include "dropbox/properties/PropertiesPropertyTemplateError.h"
#include "dropbox/files/FilesRelocationArg.h"
#include "dropbox/files/FilesRelocationError.h"
#include "dropbox/files/FilesRemovePropertiesArg.h"
#include "dropbox/files/FilesRemovePropertiesError.h"
#include "dropbox/files/FilesRestoreArg.h"
#include "dropbox/files/FilesRestoreError.h"
#include "dropbox/files/FilesSaveCopyReferenceArg.h"
#include "dropbox/files/FilesSaveCopyReferenceError.h"
#include "dropbox/files/FilesSaveCopyReferenceResult.h"
#include "dropbox/files/FilesSaveUrlArg.h"
#include "dropbox/files/FilesSaveUrlError.h"
#include "dropbox/files/FilesSaveUrlJobStatus.h"
#include "dropbox/files/FilesSaveUrlResult.h"
#include "dropbox/files/FilesSearchArg.h"
#include "dropbox/files/FilesSearchError.h"
#include "dropbox/files/FilesSearchResult.h"
#include "dropbox/files/FilesThumbnailArg.h"
#include "dropbox/files/FilesThumbnailError.h"
#include "dropbox/files/FilesUpdatePropertiesError.h"
#include "dropbox/files/FilesUpdatePropertyGroupArg.h"
#include "dropbox/files/FilesUploadError.h"
#include "dropbox/files/FilesUploadErrorWithProperties.h"
#include "dropbox/files/FilesUploadSessionAppendArg.h"
#include "dropbox/files/FilesUploadSessionCursor.h"
#include "dropbox/files/FilesUploadSessionFinishArg.h"
#include "dropbox/files/FilesUploadSessionFinishBatchArg.h"
#include "dropbox/files/FilesUploadSessionFinishBatchJobStatus.h"
#include "dropbox/files/FilesUploadSessionFinishError.h"
#include "dropbox/files/FilesUploadSessionLookupError.h"
#include "dropbox/files/FilesUploadSessionStartArg.h"
#include "dropbox/files/FilesUploadSessionStartResult.h"

namespace dropboxQt{

class Endpoint;
class DropboxRequestConfig;
class DropboxAuthInfo;

namespace files{
    class FilesRoutes{
    public:
        FilesRoutes(Endpoint*);
            /**
            ApiRoute('alpha/get_metadata')

            Returns the metadata for a file or folder. This is an alpha endpoint
            compatible with the properties API. Note: Metadata for the root
            folder is unsupported.
            on error:AlphaGetMetadataError
            */
        Metadata alphaGetMetadata(const AlphaGetMetadataArg&);

            /**
            ApiRoute('alpha/upload')

            Create a new file with the contents provided in the request. Note
            that this endpoint is part of the properties API alpha and is
            slightly different from :meth:`upload`. Do not use this to upload a
            file larger than 150 MB. Instead, create an upload session with
            :meth:`upload_session_start`.
            on error:UploadErrorWithProperties
            */
        FileMetadata alphaUpload(const CommitInfoWithProperties&, QIODevice* readFrom);

            /**
            ApiRoute('copy')

            Copy a file or folder to a different location in the user's Dropbox.
            If the source path is a folder all its contents will be copied.
            on error:RelocationError
            */
        Metadata copy(const RelocationArg&);

            /**
            ApiRoute('copy_reference/get')

            Get a copy reference to a file or folder. This reference string can
            be used to save that file or folder to another user's Dropbox by
            passing it to :meth:`copy_reference_save`.
            on error:GetCopyReferenceError
            */
        GetCopyReferenceResult copyReferenceGet(const GetCopyReferenceArg&);

            /**
            ApiRoute('copy_reference/save')

            Save a copy reference returned by :meth:`copy_reference_get` to the
            user's Dropbox.
            on error:SaveCopyReferenceError
            */
        SaveCopyReferenceResult copyReferenceSave(const SaveCopyReferenceArg&);

            /**
            ApiRoute('create_folder')

            Create a folder at a given path.
            on error:CreateFolderError
            */
        FolderMetadata createFolder(const CreateFolderArg&);

            /**
            ApiRoute('delete')

            Delete the file or folder at a given path. If the path is a folder,
            all its contents will be deleted too. A successful response
            indicates that the file or folder was deleted. The returned metadata
            will be the corresponding :class:`FileMetadata` or
            :class:`FolderMetadata` for the item at time of deletion, and not a
            :class:`DeletedMetadata` object.
            on error:DeleteError
            */
        Metadata deleteOperation(const DeleteArg&);

            /**
            ApiRoute('download')

            Download a file from a user's Dropbox.
            on error:DownloadError
            */
        FileMetadata download(const DownloadArg&, QIODevice* writeTo);

            /**
            ApiRoute('get_metadata')

            Returns the metadata for a file or folder. Note: Metadata for the
            root folder is unsupported.
            on error:GetMetadataError
            */
        Metadata getMetadata(const GetMetadataArg&);

            /**
            ApiRoute('get_preview')

            Get a preview for a file. Currently previews are only generated for
            the files with  the following extensions: .doc, .docx, .docm, .ppt,
            .pps, .ppsx, .ppsm, .pptx, .pptm,  .xls, .xlsx, .xlsm, .rtf
            on error:PreviewError
            */
        FileMetadata getPreview(const PreviewArg&, QIODevice* writeTo);

            /**
            ApiRoute('get_temporary_link')

            Get a temporary link to stream content of a file. This link will
            expire in four hours and afterwards you will get 410 Gone.
            Content-Type of the link is determined automatically by the file's
            mime type.
            on error:GetTemporaryLinkError
            */
        GetTemporaryLinkResult getTemporaryLink(const GetTemporaryLinkArg&);

            /**
            ApiRoute('get_thumbnail')

            Get a thumbnail for an image. This method currently supports files
            with the following file extensions: jpg, jpeg, png, tiff, tif, gif
            and bmp. Photos that are larger than 20MB in size won't be converted
            to a thumbnail.
            on error:ThumbnailError
            */
        FileMetadata getThumbnail(const ThumbnailArg&, QIODevice* writeTo);

            /**
            ApiRoute('list_folder')

            Returns the contents of a folder.
            on error:ListFolderError
            */
        ListFolderResult listFolder(const ListFolderArg&);

            /**
            ApiRoute('list_folder/continue')

            Once a cursor has been retrieved from :meth:`list_folder`, use this
            to paginate through all files and retrieve updates to the folder.
            on error:ListFolderContinueError
            */
        ListFolderResult listFolderContinue(const ListFolderContinueArg&);

            /**
            ApiRoute('list_folder/get_latest_cursor')

            A way to quickly get a cursor for the folder's state. Unlike
            :meth:`list_folder`, :meth:`list_folder_get_latest_cursor` doesn't
            return any entries. This endpoint is for app which only needs to
            know about new files and modifications and doesn't need to know
            about files that already exist in Dropbox.
            on error:ListFolderError
            */
        ListFolderGetLatestCursorResult listFolderGetLatestCursor(const ListFolderArg&);

            /**
            ApiRoute('list_folder/longpoll')

            A longpoll endpoint to wait for changes on an account. In
            conjunction with :meth:`list_folder_continue`, this call gives you a
            low-latency way to monitor an account for file changes. The
            connection will block until there are changes available or a timeout
            occurs. This endpoint is useful mostly for client-side apps. If
            you're looking for server-side notifications, check out our
            `webhooks documentation
            <https://www.dropbox.com/developers/reference/webhooks>`_.
            on error:ListFolderLongpollError
            */
        ListFolderLongpollResult listFolderLongpoll(const ListFolderLongpollArg&);

            /**
            ApiRoute('list_revisions')

            Return revisions of a file
            on error:ListRevisionsError
            */
        ListRevisionsResult listRevisions(const ListRevisionsArg&);

            /**
            ApiRoute('move')

            Move a file or folder to a different location in the user's Dropbox.
            If the source path is a folder all its contents will be moved.
            on error:RelocationError
            */
        Metadata move(const RelocationArg&);

            /**
            ApiRoute('permanently_delete')

            Permanently delete the file or folder at a given path (see
            https://www.dropbox.com/en/help/40). Note: This endpoint is only
            available for Dropbox Business apps.
            on error:DeleteError
            */
        void permanentlyDelete(const DeleteArg&);

            /**
            ApiRoute('properties/add')

            Add custom properties to a file using a filled property template.
            See properties/template/add to create new property templates.
            on error:AddPropertiesError
            */
        void propertiesAdd(const PropertyGroupWithPath&);

            /**
            ApiRoute('properties/overwrite')

            Overwrite custom properties from a specified template associated
            with a file.
            on error:InvalidPropertyGroupError
            */
        void propertiesOverwrite(const PropertyGroupWithPath&);

            /**
            ApiRoute('properties/remove')

            Remove all custom properties from a specified template associated
            with a file. To remove specific property key value pairs, see
            :meth:`properties_update`. To update a property template, see
            properties/template/update. Property templates can't be removed once
            created.
            on error:RemovePropertiesError
            */
        void propertiesRemove(const RemovePropertiesArg&);

            /**
            ApiRoute('properties/template/get')

            Get the schema for a specified template.
            on error:PropertyTemplateError
            */
        properties::GetPropertyTemplateResult propertiesTemplateGet(const properties::GetPropertyTemplateArg&);

            /**
            ApiRoute('properties/template/list')

            Get the property template identifiers for a user. To get the schema
            of each template use :meth:`properties_template_get`.
            on error:PropertyTemplateError
            */
        properties::ListPropertyTemplateIds propertiesTemplateList(void);

            /**
            ApiRoute('properties/update')

            Add, update or remove custom properties from a specified template
            associated with a file. Fields that already exist and not described
            in the request will not be modified.
            on error:UpdatePropertiesError
            */
        void propertiesUpdate(const UpdatePropertyGroupArg&);

            /**
            ApiRoute('restore')

            Restore a file to a specific revision
            on error:RestoreError
            */
        FileMetadata restore(const RestoreArg&);

            /**
            ApiRoute('save_url')

            Save a specified URL into a file in user's Dropbox. If the given
            path already exists, the file will be renamed to avoid the conflict
            (e.g. myfile (1).txt).
            on error:SaveUrlError
            */
        SaveUrlResult saveUrl(const SaveUrlArg&);

            /**
            ApiRoute('save_url/check_job_status')

            Check the status of a :meth:`save_url` job.
            on error:PollError
            */
        SaveUrlJobStatus saveUrlCheckJobStatus(const async::PollArg&);

            /**
            ApiRoute('search')

            Searches for files and folders. Note: Recent changes may not
            immediately be reflected in search results due to a short delay in
            indexing.
            on error:SearchError
            */
        SearchResult search(const SearchArg&);

            /**
            ApiRoute('upload')

            Create a new file with the contents provided in the request. Do not
            use this to upload a file larger than 150 MB. Instead, create an
            upload session with :meth:`upload_session_start`.
            on error:UploadError
            */
        FileMetadata upload(const CommitInfo&, QIODevice* readFrom);

            /**
            ApiRoute('upload_session/append')

            Append more data to an upload session. A single request should not
            upload more than 150 MB of file contents.
            on error:UploadSessionLookupError
            */
        void uploadSessionAppend(const UploadSessionCursor&, QIODevice* readFrom);

            /**
            ApiRoute('upload_session/append_v2')

            Append more data to an upload session. When the parameter close is
            set, this call will close the session. A single request should not
            upload more than 150 MB of file contents.
            on error:UploadSessionLookupError
            */
        void uploadSessionAppendV2(const UploadSessionAppendArg&, QIODevice* readFrom);

            /**
            ApiRoute('upload_session/finish')

            Finish an upload session and save the uploaded data to the given
            file path. A single request should not upload more than 150 MB of
            file contents.
            on error:UploadSessionFinishError
            */
        FileMetadata uploadSessionFinish(const UploadSessionFinishArg&, QIODevice* readFrom);

            /**
            ApiRoute('upload_session/finish_batch')

            This route helps you commit many files at once into a user's
            Dropbox. Use :meth:`upload_session_start` and
            :meth:`upload_session_append_v2` to upload file contents. We
            recommend uploading many files in parallel to increase throughput.
            Once the file contents have been uploaded, rather than calling
            :meth:`upload_session_finish`, use this route to finish all your
            upload sessions in a single request. ``UploadSessionStartArg.close``
            or ``UploadSessionAppendArg.close`` needs to be true for last
            :meth:`upload_session_start` or :meth:`upload_session_append_v2`
            call. This route will return job_id immediately and do the async
            commit job in background. We have another route
            :meth:`upload_session_finish_batch_check` to check the job status.
            For the same account, this route should be executed serially. That
            means you should not start next job before current job finishes.
            Also we only allow up to 1000 entries in a single request
            on error:Void
            */
        async::LaunchEmptyResult uploadSessionFinishBatch(const UploadSessionFinishBatchArg&);

            /**
            ApiRoute('upload_session/finish_batch/check')

            Returns the status of an asynchronous job for
            :meth:`upload_session_finish_batch`. If success, it returns list of
            result for each entry
            on error:PollError
            */
        UploadSessionFinishBatchJobStatus uploadSessionFinishBatchCheck(const async::PollArg&);

            /**
            ApiRoute('upload_session/start')

            Upload sessions allow you to upload a single file using multiple
            requests. This call starts a new upload session with the given data.
            You can then use :meth:`upload_session_append_v2` to add more data
            and :meth:`upload_session_finish` to save all the data to a file in
            Dropbox. A single request should not upload more than 150 MB of file
            contents.
            on error:Void
            */
        UploadSessionStartResult uploadSessionStart(const UploadSessionStartArg&, QIODevice* readFrom);

    protected:
        Endpoint* m_end_point;
    };//FilesRoutes

    ///exception AlphaGetMetadataError for alpha/get_metadata
    class AlphaGetMetadataErrorException: public ReplyException{
    public:
        const files::AlphaGetMetadataError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        AlphaGetMetadataErrorException(const files::AlphaGetMetadataError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::AlphaGetMetadataError m_err;
    };

    ///exception UploadErrorWithProperties for alpha/upload
    class UploadErrorWithPropertiesException: public ReplyException{
    public:
        const files::UploadErrorWithProperties& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UploadErrorWithPropertiesException(const files::UploadErrorWithProperties& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::UploadErrorWithProperties m_err;
    };

    ///exception RelocationError for copy
    class RelocationErrorException: public ReplyException{
    public:
        const files::RelocationError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RelocationErrorException(const files::RelocationError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::RelocationError m_err;
    };

    ///exception GetCopyReferenceError for copy_reference/get
    class GetCopyReferenceErrorException: public ReplyException{
    public:
        const files::GetCopyReferenceError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GetCopyReferenceErrorException(const files::GetCopyReferenceError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::GetCopyReferenceError m_err;
    };

    ///exception SaveCopyReferenceError for copy_reference/save
    class SaveCopyReferenceErrorException: public ReplyException{
    public:
        const files::SaveCopyReferenceError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        SaveCopyReferenceErrorException(const files::SaveCopyReferenceError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::SaveCopyReferenceError m_err;
    };

    ///exception CreateFolderError for create_folder
    class CreateFolderErrorException: public ReplyException{
    public:
        const files::CreateFolderError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        CreateFolderErrorException(const files::CreateFolderError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::CreateFolderError m_err;
    };

    ///exception DeleteError for delete
    class DeleteErrorException: public ReplyException{
    public:
        const files::DeleteError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        DeleteErrorException(const files::DeleteError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::DeleteError m_err;
    };

    ///exception DownloadError for download
    class DownloadErrorException: public ReplyException{
    public:
        const files::DownloadError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        DownloadErrorException(const files::DownloadError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::DownloadError m_err;
    };

    ///exception GetMetadataError for get_metadata
    class GetMetadataErrorException: public ReplyException{
    public:
        const files::GetMetadataError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GetMetadataErrorException(const files::GetMetadataError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::GetMetadataError m_err;
    };

    ///exception PreviewError for get_preview
    class PreviewErrorException: public ReplyException{
    public:
        const files::PreviewError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        PreviewErrorException(const files::PreviewError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::PreviewError m_err;
    };

    ///exception GetTemporaryLinkError for get_temporary_link
    class GetTemporaryLinkErrorException: public ReplyException{
    public:
        const files::GetTemporaryLinkError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GetTemporaryLinkErrorException(const files::GetTemporaryLinkError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::GetTemporaryLinkError m_err;
    };

    ///exception ThumbnailError for get_thumbnail
    class ThumbnailErrorException: public ReplyException{
    public:
        const files::ThumbnailError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ThumbnailErrorException(const files::ThumbnailError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::ThumbnailError m_err;
    };

    ///exception ListFolderError for list_folder
    class ListFolderErrorException: public ReplyException{
    public:
        const files::ListFolderError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListFolderErrorException(const files::ListFolderError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::ListFolderError m_err;
    };

    ///exception ListFolderContinueError for list_folder/continue
    class ListFolderContinueErrorException: public ReplyException{
    public:
        const files::ListFolderContinueError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListFolderContinueErrorException(const files::ListFolderContinueError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::ListFolderContinueError m_err;
    };

    ///exception ListFolderLongpollError for list_folder/longpoll
    class ListFolderLongpollErrorException: public ReplyException{
    public:
        const files::ListFolderLongpollError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListFolderLongpollErrorException(const files::ListFolderLongpollError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::ListFolderLongpollError m_err;
    };

    ///exception ListRevisionsError for list_revisions
    class ListRevisionsErrorException: public ReplyException{
    public:
        const files::ListRevisionsError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListRevisionsErrorException(const files::ListRevisionsError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::ListRevisionsError m_err;
    };

    ///exception AddPropertiesError for properties/add
    class AddPropertiesErrorException: public ReplyException{
    public:
        const files::AddPropertiesError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        AddPropertiesErrorException(const files::AddPropertiesError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::AddPropertiesError m_err;
    };

    ///exception InvalidPropertyGroupError for properties/overwrite
    class InvalidPropertyGroupErrorException: public ReplyException{
    public:
        const files::InvalidPropertyGroupError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        InvalidPropertyGroupErrorException(const files::InvalidPropertyGroupError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::InvalidPropertyGroupError m_err;
    };

    ///exception RemovePropertiesError for properties/remove
    class RemovePropertiesErrorException: public ReplyException{
    public:
        const files::RemovePropertiesError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RemovePropertiesErrorException(const files::RemovePropertiesError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::RemovePropertiesError m_err;
    };

    ///exception PropertyTemplateError for properties/template/get
    class PropertyTemplateErrorException: public ReplyException{
    public:
        const properties::PropertyTemplateError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        PropertyTemplateErrorException(const properties::PropertyTemplateError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        properties::PropertyTemplateError m_err;
    };

    ///exception UpdatePropertiesError for properties/update
    class UpdatePropertiesErrorException: public ReplyException{
    public:
        const files::UpdatePropertiesError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UpdatePropertiesErrorException(const files::UpdatePropertiesError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::UpdatePropertiesError m_err;
    };

    ///exception RestoreError for restore
    class RestoreErrorException: public ReplyException{
    public:
        const files::RestoreError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RestoreErrorException(const files::RestoreError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::RestoreError m_err;
    };

    ///exception SaveUrlError for save_url
    class SaveUrlErrorException: public ReplyException{
    public:
        const files::SaveUrlError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        SaveUrlErrorException(const files::SaveUrlError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::SaveUrlError m_err;
    };

    ///exception PollError for save_url/check_job_status
    class PollErrorException: public ReplyException{
    public:
        const async::PollError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        PollErrorException(const async::PollError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        async::PollError m_err;
    };

    ///exception SearchError for search
    class SearchErrorException: public ReplyException{
    public:
        const files::SearchError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        SearchErrorException(const files::SearchError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::SearchError m_err;
    };

    ///exception UploadError for upload
    class UploadErrorException: public ReplyException{
    public:
        const files::UploadError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UploadErrorException(const files::UploadError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::UploadError m_err;
    };

    ///exception UploadSessionLookupError for upload_session/append
    class UploadSessionLookupErrorException: public ReplyException{
    public:
        const files::UploadSessionLookupError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UploadSessionLookupErrorException(const files::UploadSessionLookupError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::UploadSessionLookupError m_err;
    };

    ///exception UploadSessionFinishError for upload_session/finish
    class UploadSessionFinishErrorException: public ReplyException{
    public:
        const files::UploadSessionFinishError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UploadSessionFinishErrorException(const files::UploadSessionFinishError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        files::UploadSessionFinishError m_err;
    };


}//files
}//dropboxQt
