#pragma once

#ifdef GLB_PLATFORM_WINDOWS

extern GLbox::Application* GLbox::CreateApplication();

int main(int ac, char **av)
{
	GLbox::Log::Init();
	GLB_CORE_INFO("GLbox initialized!");
	GLB_INFO("Sandbox initialiazed!");

	auto app = GLbox::CreateApplication();
	app->Run();
	delete app;
}

#endif