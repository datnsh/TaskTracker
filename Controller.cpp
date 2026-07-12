#include "Controller.h"
Controller::Controller(TaskManager& taskManager, InputParser& inputParser) : taskManager(taskManager), parser(inputParser)
{
}

void Controller::Execute(ParsedCommand& cmd) {
	if (cmd.command == "add") {
		taskManager.AddTask(cmd.arguments);
	}
	else if (cmd.command == "update") {
		std::string taskIdStr = cmd.arguments[0];
		std::int64_t taskId = std::stoll(taskIdStr);
		std::string propertyStr = cmd.arguments[1];
		TaskProperty taskProperty = TaskPropertyParser::ParseTaskProperty(propertyStr);
		TaskValue newValue = this->ConvertValue(taskProperty, cmd.arguments[2]);
		taskManager.Update(taskId, taskProperty, newValue);
	}
	else if (cmd.command == "remove") {
		std::cout << "Remove task\n";
	}
	else if (cmd.command == "list") {
		taskManager.ListTask();
	}
	else {
		std::cout << "Invalid command\n";
	}
}

TaskValue Controller::ConvertValue(TaskProperty& property, const std::string& raw) {
	switch (property) {
	case TaskProperty::ID:
		return std::stoll(raw);
	case TaskProperty::DESCRIPTION:
		return raw;
	case TaskProperty::PRIORITY:
		return std::stoi(raw);
	case TaskProperty::STATUS:
		if (raw == "TO_DO") {
			return TaskStatus::TO_DO;
		}
		else if (raw == "IN_PROGRESS") {
			return TaskStatus::IN_PROGRESS;
		}
		else if (raw == "DONE") {
			return TaskStatus::DONE;
		}
	default:
		throw std::invalid_argument("Invalid task property");
	}
}

void Controller::RunApp() {
	std::cout << "Input 0 to exit program\n";
	while (true) {
		std::string userInput;
		std::cout << "Enter command:";
		std::getline(std::cin, userInput);

		if (userInput == "0") {
			break;
		}

		ParsedCommand command = this->parser.ParseUserInput(userInput);
		Execute(command);
		
		std::cout << "\n";
	}
}
