#pragma once

#include <exception>
#include <string>

namespace dropboxQt{
    class DropboxException: public std::exception
    {
	public:
		explicit DropboxException(const std::string& message) :m_msg(message), m_status_code(0){}

        explicit DropboxException(const std::string& message, int code):
			m_msg(message),
            m_status_code(code)
        {};        
        
		virtual const char* what() const throw (){
			return m_msg.c_str();
		}

        virtual int statusCode()const throw(){
            return m_status_code;
        }        
        
	protected:
		std::string m_msg;
        int m_status_code;
    };

    class ReplyException: public DropboxException
    {
	public:
		explicit ReplyException(const std::string& message, int code, const std::string summary)
            :DropboxException(message, code), m_error_summary(summary){build("");};

		virtual const char* what() const throw (){
			return m_what.c_str();
		}

        const std::string& errSummary()const{return m_error_summary;}
        
        
    protected:
        void build(std::string err);
        
	protected:
        std::string m_error_summary;
        std::string m_what;
    };

    class IllegalStateException: public DropboxException
    {
    public:
        explicit IllegalStateException(const std::string& message, int state):
			DropboxException(message, state)
        {};
    };    
    

#define DECLARE_DBOX_ERR_EXCEPTION(E, F)     class E: public ReplyException{	\
    public:																				\
        const F& err()const {return m_err;}												\
        static void raise(const QByteArray& data, int status_code, const std::string& message);\
    protected:																			\
        E(const F& err, const std::string& summary, int status_code, const std::string& message);\
    protected:																			\
        F m_err;																		\
    };																					\


#define IMPLEMENT_DBOX_ERR_EXCEPTION(E, F) E::E(const F& err, const std::string& summary, int status_code, const std::string& message)\
	:ReplyException(message, status_code, summary), m_err(err){							\
    build(m_err.toString().toStdString());												\
}																						\
void E::raise(const QByteArray& data, int status_code, const std::string& message)		\
{																						\
    F err;																				\
    std::string summary;																\
    if(!data.isEmpty()){																\
        QJsonDocument doc = QJsonDocument::fromJson(data);								\
        QJsonObject js_in = doc.object();												\
        err.fromJson(js_in["error"].toObject());										\
        summary = js_in["error_summary"].toString().toStdString();						\
    }																					\
    throw E(err, summary, status_code, message);										\
}																						\



};
