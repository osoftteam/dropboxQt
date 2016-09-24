/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class DateRange{
        /**
            Input arguments that can be provided for most reports.

            field: start_date: Optional starting date (inclusive)
            field: end_date: Optional ending date (exclusive)
        */

    public:
        DateRange(){};

        DateRange(const QDateTime& arg){ m_start_date = arg; };

    public:
        ///Optional starting date (inclusive)
        QDateTime startDate()const{return m_start_date;};
        DateRange& setStartdate(const QDateTime& arg){m_start_date=arg; return *this;};

        ///Optional ending date (exclusive)
        QDateTime endDate()const{return m_end_date;};
        DateRange& setEnddate(const QDateTime& arg){m_end_date=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static DateRange EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Optional starting date (inclusive)
        QDateTime m_start_date;

        ///Optional ending date (exclusive)
        QDateTime m_end_date;

    };//DateRange

}//team
}//dropboxQt
