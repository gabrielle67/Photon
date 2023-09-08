#pragma once

#ifdef PH_PLATFORM_WINDOWS

extern Photon::Application* Photon::CreateApplication();
int main(int argc, char** argv) {
	printf("------Photon Engine------\n");
	auto app = Photon::CreateApplication();
	app->Run();
	delete app;
}
#endif
