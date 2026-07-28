#pragma once
#include "Task.h"
#include "Helper.h"
#include "TaskTypes.h"
#include <string>

class TaskParser
{
public:
	static TaskProperty ParseStringToTaskProperty(const std::string& propertyStr);

	static TaskValue StringToTaskValue(TaskProperty& property,std::string& rawStr);
};

