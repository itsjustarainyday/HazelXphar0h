#pragma once

#include "Core.h"

namespace HazelXphar0h
{
	class HxP_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
