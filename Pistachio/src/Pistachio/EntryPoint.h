#pragma once

#ifdef CHIO_PLANTFORM_WINDOWS

extern Pistachio::Application* Pistachio::CreatApplication();

int main(int argc, char** argv)
{
	// 初始化日志
	Pistachio::Log::Init();
	LOG_CORE_WARN("Initialized Log!");
	int a = 5;
	LOG_CORE_INFO("Hello Var={0}",a);

	// 创建一个程序类，并开始运行
	auto app = Pistachio::CreatApplication();
	app->Run();
	delete app;
}

#endif // CHIO_PLANTFORM_WINDOWS

