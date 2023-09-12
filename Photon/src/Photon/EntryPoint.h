#pragma once

#ifdef PH_PLATFORM_WINDOWS

extern Photon::Application* Photon::CreateApplication();
int main(int argc, char** argv) {
	
	//------Testing Logs------
	Photon::Log::Init();
	PH_CORE_WARN("Testing Logs on Core!");
	int a = 5;
	PH_INFO("Testing Vars on Client: Var={0}", a);


	auto app = Photon::CreateApplication();
	app->Run();
	delete app;
}
#endif
