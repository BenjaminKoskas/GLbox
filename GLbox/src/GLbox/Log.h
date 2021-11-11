#pragma once

#include <memory.h>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace GLbox {
	class GLB_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define GLB_CORE_TRACE(...)   ::GLbox::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GLB_CORE_INFO(...)    ::GLbox::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GLB_CORE_WARN(...)    ::GLbox::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GLB_CORE_ERROR(...)   ::GLbox::Log::GetCoreLogger()->error(__VA_ARGS__)

#define GLB_TRACE(...)        ::GLbox::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GLB_INFO(...)         ::GLbox::Log::GetClientLogger()->info(__VA_ARGS__)
#define GLB_WARN(...)         ::GLbox::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GLB_ERROR(...)        ::GLbox::Log::GetClientLogger()->error(__VA_ARGS__)