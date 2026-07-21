#pragma once
#include <Task.h>
#include <Helper.h>
using TaskValue = std::variant<int64_t, std::string, TaskStatus>;
class TaskParser
{
public:
	static TaskProperty ParseStringToTaskProperty(const std::string& propertyStr);

	static std::string TaskStatusToString(TaskStatus property);
	static TaskValue ParseStringToCommandType(TaskProperty& property, std::string& rawStr);
};

