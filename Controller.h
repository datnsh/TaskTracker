#pragma once
#include <iostream>
#include <sstream>
#include <TaskManager.h>
#include "InputParser.h"
#include <queue>
#include <Helper.h>
#include <QString>

class Controller {
public:
	Controller(TaskManager& taskManager, InputParser& inputParser);

	void Execute(std::string& command);
	void RunApp();
private:
	TaskManager& taskManager;
	InputParser& m_parser;
};