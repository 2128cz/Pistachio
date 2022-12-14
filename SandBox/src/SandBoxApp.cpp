#include <Pistachio.h>

class Sandbox: public Pistachio::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

/// <summary>
/// 客户端中定义返回的程序
/// </summary>
/// <returns></returns>
Pistachio::Application* Pistachio::CreatApplication()
{
	return new Sandbox();
}