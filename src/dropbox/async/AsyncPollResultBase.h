/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace async{
    class PollResultBase{
        /**
            Result returned by methods that poll for the status of an
            asynchronous job. Unions that extend this union should add a
            'complete' field with a type of the information returned upon job
            completion. See :class:`PollEmptyResult` for an example.

            field: in_progress: The asynchronous job is still in progress.
        */
    public:
        enum Tag{

		/*The asynchronous job is still in progress.*/
		PollResultBase_IN_PROGRESS
        };

        PollResultBase(){}
        PollResultBase(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PollResultBase EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//PollResultBase

}//async
}//dropboxQt
