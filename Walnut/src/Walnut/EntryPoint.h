#pragma once

#ifdef WN_PLATFORM_WINDOWS

extern Walnut::Application* Walnut::CreateApplication();


int main(int argc, char** argv) {

	Walnut::Log::Init();
	WN_CORE_WARN("Initialized Log!");
	int a = 5;
	WN_INFO("Hello! Var={0}", a);
	auto app = Walnut::CreateApplication();
	app->Run();
	delete app;
}
#endif