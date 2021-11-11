#include <GLbox.h>

class Sandbox : public GLbox::Application 
{
public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
};

GLbox::Application* GLbox::CreateApplication()
{
	return new Sandbox();
}