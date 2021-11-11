#pragma once

#ifdef GLB_PLATFORM_WINDOWS
	#ifdef GLB_BUILD_DLL
		#define GLB_API __declspec(dllexport)
	#else
		#define GLB_API __declspec(dllimport)
	#endif
#else
	#error GLbox only support Windows!
#endif