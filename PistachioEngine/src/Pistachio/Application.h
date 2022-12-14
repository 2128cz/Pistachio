#pragma once

#include "Core.h"

namespace Pistachio
{
	/*
	引擎应用程序
	Engine application
	*/
	class CHIO_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	/*
	应当在客户端中定义
	to be define in client
	*/
	Application* CreatApplication();
}

