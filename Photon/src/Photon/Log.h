#pragma once

#include "memory"

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Photon {
	class PHOTON_API Log
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

// Core log macros
#define PH_CORE_TRACE(...)    ::Photon::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PH_CORE_INFO(...)     ::Photon::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PH_CORE_WARN(...)     ::Photon::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PH_CORE_ERROR(...)    ::Photon::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PH_CORE_CRITICAL(...) ::Photon::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define PH_TRACE(...)         ::Photon::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PH_INFO(...)          ::Photon::Log::GetClientLogger()->info(__VA_ARGS__)
#define PH_WARN(...)          ::Photon::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PH_ERROR(...)         ::Photon::Log::GetClientLogger()->error(__VA_ARGS__)
#define PH_CRITICAL(...)      ::Photon::Log::GetClientLogger()->critical(__VA_ARGS__)
