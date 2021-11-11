#pragma once

#include "Core.h"

namespace GLbox {
	class GLB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	Application* CreateApplication();
}