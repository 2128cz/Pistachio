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
/// �ͻ����ж��巵�صĳ���
/// </summary>
/// <returns></returns>
Pistachio::Application* Pistachio::CreatApplication()
{
	return new Sandbox();
}