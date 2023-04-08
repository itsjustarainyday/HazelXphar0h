#pragma once

#ifdef HxP_PLATFORM_WINDOWS
	#ifdef HxP_BUILD_DLL
		#define HxP_API __declspec(dllexport)
	#else
		#define HxP_API __declspec(dllimport)
	#endif
#else
#error HazelXphar0h only supports Windows! (for now)
#endif
