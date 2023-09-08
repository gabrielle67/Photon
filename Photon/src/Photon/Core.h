#pragma once

#ifdef PH_PLATFORM_WINDOWS
	#ifdef PH_BUILD_DLL
		#define PHOTON_API __declspec(dllexport)
	#else
		#define PHOTON_API __declspec(dllimport)
	#endif
#else 
	#error Photon only supported for Windows!
#endif
