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
    
    /*
    class ServerReplyException: public DropboxException
    {
    public:
        explicit ServerReplyException(const std::string& message, int code):
			DropboxException(message),
            m_status_code(code)
        {};


        virtual int code()const throw(){
            return m_status_code;
        }        
    protected:    
        int m_status_code;
    };

    
    class IllegalStateException: public DropboxException
    {
    public:
        explicit IllegalStateException(const std::string& message, int state):
			DropboxException(message),
            m_state(state)
        {};

        virtual int state()const throw(){
            return m_state;
        }        
    protected:
        int m_state;	
        };*/

};
