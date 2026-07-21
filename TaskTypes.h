#pragma once
#include <Task.h>
#include <string>
#include <variant>

using TaskValue = std::variant<int64_t, std::string, TaskStatus>;


