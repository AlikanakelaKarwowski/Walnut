#include "wnpch.h"
#include "Application.h"


#include "Walnut/Events/ApplicationEvent.h"
#include "Walnut/Log.h"

namespace Walnut {

	Application::Application() {

	}
	Application::~Application() {

	}
	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		WN_TRACE(e);
	}
}