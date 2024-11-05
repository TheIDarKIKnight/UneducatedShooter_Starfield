#pragma once

#pragma warning(push)
#include "SFSE/SFSE.h"
#include "RE/Fallout.h"

#ifdef NDEBUG
#	include <spdlog/sinks/basic_file_sink.h>
#else
#	include <spdlog/sinks/msvc_sink.h>
#endif
#pragma warning(pop)
#pragma warning(disable: 4100);
#pragma warning(disable: 4189);
#pragma warning(disable: 4311);
#pragma warning(disable: 4302);
#pragma warning(disable: 4244);

#define DLLEXPORT __declspec(dllexport)

namespace logger = SFSE::log;

using namespace std::literals;

#include "Version.h"
