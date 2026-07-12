#include "TaskPropertyParser.h"

TaskProperty TaskPropertyParser::ParseTaskProperty(const std::string& propertyStr) {
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