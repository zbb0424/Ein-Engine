#pragma once

#include "Core.h"

namespace Ein 
{
	class EIN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// define int client
	Application* CreateApplication();

}

