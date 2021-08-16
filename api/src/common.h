#pragma once

#ifdef XY_API_DYNAMIC
#	define XY_API __declspec(dllexport)
#elif XY_API_STATIC
#	define XY_API
#else
#	define XY_API
#endif