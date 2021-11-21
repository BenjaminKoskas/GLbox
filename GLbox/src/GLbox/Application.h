#pragma once

#include "Core.h"
#include "Log.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>

namespace GLbox {
	class GLB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		GLFWwindow* window = nullptr;
		bool m_Running = true;
	};

	Application* CreateApplication();
}