#pragma once

#ifdef CHIO_PLANTFORM_WINDOWS

extern Pistachio::Application* Pistachio::CreatApplication();

int main(int argc, char** argv)
{
	auto app = Pistachio::CreatApplication();
	app->Run();
	delete app;
}

#endif // CHIO_PLANTFORM_WINDOWS

