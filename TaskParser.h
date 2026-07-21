#pragma once
#include "Task.h"
#include "Helper.h"
#include "TaskTypes.h"
#include <string>

class TaskParser
{
public:
	static TaskProperty ParseStringToTaskProperty(const std::string& propertyStr);

	static std::string TaskStatusToString(TaskStatus& property);

	static TaskValue StringToTaskValue(TaskProperty& property,std::string& rawStr);
};

