#pragma once

#include <functional>

namespace dropboxQt{

	class Endpoint;

    class DropboxRouteBase
    {        
    public:
        DropboxRouteBase(Endpoint* ep):m_end_point(ep){}

	protected:
		/*
		void bcall4VoidArgVoidRes(std::function<void(std::function<void()>,
			std::function<void(std::unique_ptr<DropboxException>)>)> asyncFunction)
		{
			std::unique_ptr<DropboxException> ex;
			asyncFunction
			(
				[&](void)
			{
				m_end_point->exitEventsLoop();
			},
				[&](std::unique_ptr<DropboxException> e)
			{
				ex = std::move(e);
				m_end_point->exitEventsLoop();
			}
			);
			m_end_point->runEventsLoop();
			if (ex)
				ex->raise();
		};
		*/
    protected:
        Endpoint* m_end_point;
    };

}
