#pragma once

// 仅提供给引擎应用程序的头文件

//#include <stdio.h>				// 与应用层不太相关，可以用于测试，不需要提供
//#include "Pistachio/Core.h"		// 核心应该被封装给引擎使用，而不是应用层，所以不提供
#include "Pistachio/Application.h"	// 引用程序
#include "Pistachio/Log.h"			// 日志

#pragma region EntryPoint
#include "Pistachio/EntryPoint.h"	// 入口点
#pragma endregion 

