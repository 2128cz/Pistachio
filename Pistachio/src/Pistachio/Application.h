#pragma once

#include "Core.h"

namespace Pistachio
{
	/*
	����Ӧ�ó���
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
	Ӧ���ڿͻ����ж���
	to be define in client
	*/
	Application* CreatApplication();
}

