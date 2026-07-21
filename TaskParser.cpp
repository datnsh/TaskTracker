#include "TaskParser.h"

TaskProperty TaskParser::ParseStringToTaskProperty(const std::string& propertyStr) {
	std::string property = propertyStr;
	Helper::StringToLower(property);
	if (property == "id") {
		return TaskProperty::ID;
	}
	else if (property == "description") {
		return TaskProperty::DESCRIPTION;
	}
	else if (property == "priority") {
		return TaskProperty::PRIORITY;
	}
	else if (property == "status") {
		return TaskProperty::STATUS;
	}
	else {
		throw std::invalid_argument("Invalid task property: " + property);
	}
}

std::string TaskParser::TaskStatusToString(TaskStatus status) {
	switch (status) {
	case TaskStatus::TO_DO:
		return "To do";
	case TaskStatus::IN_PROGRESS:
		return "In progress";
	case TaskStatus::DONE:
		return "Done";
	default:
		throw std::invalid_argument("Invalid task status");
	}
}

TaskValue TaskParser::StringToTaskValue(TaskProperty& property,std::string& newValueStr)
{
	switch(property) {
	case TaskProperty::ID: 
	{
		return std::stoll(newValueStr);
	}
	case TaskProperty::DESCRIPTION:
		return newValueStr;
	}
}
