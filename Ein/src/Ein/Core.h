#pragma once

#ifdef EIN_PLATFORM_WINDOWS
	#ifdef EIN_BUILD_DLL
		#define EIN_API _declspec(dllexport)
	#else
		#define EIN_API _declspec(dllimport)
	#endif
#else
	#error EIN ONLY SUPPORT WINDOWS
#endif
