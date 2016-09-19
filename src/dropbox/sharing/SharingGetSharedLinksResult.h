/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingLinkMetadata.h"

namespace dropboxQt{
namespace sharing{
    class GetSharedLinksResult{
        /**
            field: links: Shared links applicable to the path argument.
        */

    public:
        GetSharedLinksResult(){};

        GetSharedLinksResult(const std::list <LinkMetadata>&& arg){ m_links = arg; };

    public:
        ///Shared links applicable to the path argument.
        const std::list <LinkMetadata>& links()const{return m_links;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetSharedLinksResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Shared links applicable to the path argument.
        std::list <LinkMetadata> m_links;

    };//GetSharedLinksResult

}//sharing
}//dropboxQt
