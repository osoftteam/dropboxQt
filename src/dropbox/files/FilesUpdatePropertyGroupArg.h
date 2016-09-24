/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesPropertyGroupUpdate.h"

namespace dropboxQt{
namespace files{
    class UpdatePropertyGroupArg{
        /**
            field: path: A unique identifier for the file.
            field: update_property_groups: Filled custom property templates
                associated with a file.
        */

    public:
        UpdatePropertyGroupArg(){};

        UpdatePropertyGroupArg(const QString& arg){ m_path = arg; };

    public:
        ///A unique identifier for the file.
        QString path()const{return m_path;};
        UpdatePropertyGroupArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///Filled custom property templates associated with a file.
        const std::list <PropertyGroupUpdate>& updatePropertyGroups()const{return m_update_property_groups;};
        UpdatePropertyGroupArg& setUpdatepropertygroups(const std::list <PropertyGroupUpdate>&& arg){m_update_property_groups=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UpdatePropertyGroupArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A unique identifier for the file.
        QString m_path;

        ///Filled custom property templates associated with a file.
        std::list <PropertyGroupUpdate> m_update_property_groups;

    };//UpdatePropertyGroupArg

}//files
}//dropboxQt
