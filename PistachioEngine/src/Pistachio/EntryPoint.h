#pragma once

#ifdef CHIO_PLANTFORM_WINDOWS

extern Pistachio::Application* Pistachio::CreatApplication();

int main(int argc, char** argv)
{
	// ��ʼ����־
	Pistachio::Log::Init();
	LOG_CORE_WARN("Initialized Log!");
	int a = 5;
	LOG_CORE_INFO("Hello Var={0}",a);

	// ����һ�������࣬����ʼ����
	auto app = Pistachio::CreatApplication();
	app->Run();
	delete app;
}

#endif // CHIO_PLANTFORM_WINDOWS

