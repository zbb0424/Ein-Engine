#pragma once

#ifdef EIN_PLATFORM_WINDOWS

extern Ein::Application* Ein::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Ein::CreateApplication();
	app->Run();
	delete app;
}

#endif