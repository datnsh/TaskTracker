#pragma once
#include <Task.h>
#include <Helper.h>
class TaskPropertyParser
{
public:
	static TaskProperty ParseTaskProperty(const std::string& propertyStr);
};

