/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class MemberAction{
        /**
            Actions that may be taken on members of a shared folder.

            field: leave_a_copy: Allow the member to keep a copy of the folder
                when removing.
            field: make_editor: Make the member an editor of the folder.
            field: make_owner: Make the member an owner of the folder.
            field: make_viewer: Make the member a viewer of the folder.
            field: make_viewer_no_comment: Make the member a viewer of the
                folder without commenting permissions.
            field: remove: Remove the member from the folder.
        */
    public:
        enum Tag{

		/*Allow the member to keep a copy of the folder when removing.*/
		MemberAction_LEAVE_A_COPY,
		/*Make the member an editor of the folder.*/
		MemberAction_MAKE_EDITOR,
		/*Make the member an owner of the folder.*/
		MemberAction_MAKE_OWNER,
		/*Make the member a viewer of the folder.*/
		MemberAction_MAKE_VIEWER,
		/*Make the member a viewer of the folder without commenting permissions.*/
		MemberAction_MAKE_VIEWER_NO_COMMENT,
		/*Remove the member from the folder.*/
		MemberAction_REMOVE,
		/*None*/
		MemberAction_OTHER
        };

        MemberAction(){}
        MemberAction(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberAction EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//MemberAction

}//sharing
}//dropboxQt
