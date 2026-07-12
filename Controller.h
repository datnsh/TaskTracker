#pragma once
#include <iostream>
#include <sstream>
#include <TaskManager.h>
#include "InputParser.h"
#include <Helper.h>
#include <QString>
#include <cstdint>
#include <string>
#include <TaskPropertyParser.h>

class Controller {
public:
	TaskValue ConvertValue(TaskProperty& property, const std::string& raw);
	Controller(TaskManager& taskManager, InputParser& inputParser);
	void Execute(ParsedCommand& command);
	void RunApp();
private:
	TaskManager& taskManager;
	InputParser& parser;
};