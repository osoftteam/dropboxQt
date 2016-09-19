/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team_policies{
    class EmmState{
        /**
            field: disabled: Emm token is disabled
            field: optional: Emm token is optional
            field: required: Emm token is required
        */
    public:
        enum Tag{

		/*Emm token is disabled*/
		EmmState_DISABLED,
		/*Emm token is optional*/
		EmmState_OPTIONAL,
		/*Emm token is required*/
		EmmState_REQUIRED,
		/*None*/
		EmmState_OTHER
        };

        EmmState(){}
        EmmState(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static EmmState EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//EmmState

}//team_policies
}//dropboxQt
