/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class SharedLinkPolicy{
        /**
            Policy governing who can view shared links.

            field: anyone: Links can be shared with anyone.
            field: members: Links can only be shared among members of the shared
                folder.
        */
    public:
        enum Tag{

		/*Links can be shared with anyone.*/
		SharedLinkPolicy_ANYONE,
		/*Links can only be shared among members of the shared folder.*/
		SharedLinkPolicy_MEMBERS,
		/*None*/
		SharedLinkPolicy_OTHER
        };

        SharedLinkPolicy(){}
        SharedLinkPolicy(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedLinkPolicy EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//SharedLinkPolicy

}//sharing
}//dropboxQt
