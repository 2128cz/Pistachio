#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Pistachio
{
	class CHIO_API Log
	{
	public:
		static void Init();
		/*
		获取引擎核心日志记录器
		*/
		inline static std::shared_ptr<spdlog::logger>& GetCroeLogger()
		{
			return s_CoreLogger;
		}
		/*
		获取客户端日志记录器
		*/
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}
#define DEBUG
#ifdef DEBUG

// 核心端日志宏
#define LOG_CORE_TRACE(...)		::Pistachio::Log::GetCroeLogger()->trace(__VA_ARGS__)
#define LOG_CORE_INFO(...)		::Pistachio::Log::GetCroeLogger()->info(__VA_ARGS__)
#define LOG_CORE_WARN(...)		::Pistachio::Log::GetCroeLogger()->warn(__VA_ARGS__)
#define LOG_CORE_ERROR(...)		::Pistachio::Log::GetCroeLogger()->error(__VA_ARGS__)
#define LOG_CORE_FATAL(...)		::Pistachio::Log::GetCroeLogger()->fatal(__VA_ARGS__)

// 客户端日志宏
#define LOG_CLIENT_TRACE(...)	::Pistachio::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LOG_CLIENT_INFO(...)	::Pistachio::Log::GetClientLogger()->info(__VA_ARGS__)
#define LOG_CLIENT_WARN(...)	::Pistachio::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_CLIENT_ERROR(...)	::Pistachio::Log::GetClientLogger()->error(__VA_ARGS__)
#define LOG_CLIENT_FATAL(...)	::Pistachio::Log::GetClientLogger()->fatal(__VA_ARGS__)
#endif // DEBUG
