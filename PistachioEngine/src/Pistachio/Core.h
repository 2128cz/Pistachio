#pragma once

#ifdef CHIO_PLANTFORM_WINDOWS
	#ifdef CHIO_BUILD_DLL
		#define CHIO_API __declspec(dllexport)
	#else
		#define CHIO_API __declspec(dllimport)
	#endif // CHIO_BUILD_DLL
#else
	#error Pistachio engine core only support Windows!
#endif // CHIO_PLANTFORM_WINDOWS