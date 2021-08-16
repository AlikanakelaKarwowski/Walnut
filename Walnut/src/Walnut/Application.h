#pragma once
#include "Core.h"
namespace Walnut {

	class WALNUT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To Be defined in client
	Application* CreateApplication();
}
