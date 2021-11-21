#include "Application.h"

namespace GLbox {
	Application::Application()
	{	
		if (!glfwInit())
			return;
		window = glfwCreateWindow(1280, 720, "GLbox", NULL, NULL);
		if (!window) {
			glfwTerminate();
			return;
		}
		glfwMakeContextCurrent(window);
		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
			GLB_CORE_ERROR("Glad failed to initialize!");
			return;
		}
	}

	Application::~Application()
	{

	}

	void Application::Run() 
	{
		while (m_Running) {
			glClear(GL_COLOR_BUFFER_BIT);
			glfwSwapBuffers(window);
			glfwPollEvents();
		}
	}
}