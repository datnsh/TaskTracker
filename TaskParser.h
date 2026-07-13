#pragma once
#include <Task.h>
#include <Helper.h>
class TaskParser
{
public:
	static TaskProperty ParseTaskProperty(const std::string& propertyStr);

	static std::string TaskStatusToString(TaskStatus property);
};

