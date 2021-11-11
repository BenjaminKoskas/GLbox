#pragma once

#ifdef GLB_PLATFORM_WINDOWS

extern GLbox::Application* GLbox::CreateApplication();

int main(int ac, char **av)
{
	auto app = GLbox::CreateApplication();
	app->run();
	delete app;
}

#endif