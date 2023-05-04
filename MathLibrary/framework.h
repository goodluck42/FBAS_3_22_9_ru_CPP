#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#ifdef MATHLIBRARY_EXPORTS
	#define LIBRARY __declspec(dllexport)
#else
	#define LIBRARY __declspec(dllimport)
#endif
