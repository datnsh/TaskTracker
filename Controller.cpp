#include "Controller.h"
Controller::Controller(TaskManager& taskManager, InputParser& inputParser) : taskManager(taskManager), parser(inputParser)
{
	std::cout << "Controller initialized\n";
}

void Controller::Execute(ParsedCommand& cmd) {
	switch (cmd.command)
	{
		case CommandType::Add:
			taskManager.AddTask(cmd.arguments);
			break;
		case CommandType::Update:
			std::string taskIdStr = cmd.arguments[0];
			std::int64_t taskId = std::stoll(taskIdStr);
			std::string propertyStr = cmd.arguments[1];
			TaskProperty taskProperty = TaskParser::ParseTaskProperty(propertyStr);
			TaskValue newValue = this->ConvertValue(taskProperty, cmd.arguments[2]);
			taskManager.Update(taskId, taskProperty, newValue);
			break;
		case CommandType::Remove:
			std::cout << "Remove task\n";
			std::int64_t taskId = std::stoll(cmd.arguments[0]);
			taskManager.DeleteTask(taskId);
			break;
		case CommandType::List:
			taskManager.ListTask();
			break;
		default:
			std::cout << "Invalid command\n";
			return;
	};
}

TaskValue Controller::ConvertValue(TaskProperty& property, std::string& raw) {
	switch (property) {
	case TaskProperty::ID:
		return std::stoll(raw);
	case TaskProperty::DESCRIPTION:
		return raw;
	case TaskProperty::PRIORITY:
		return std::stoi(raw);
	case TaskProperty::STATUS:
		if (raw == "in_progress") {
			return TaskStatus::IN_PROGRESS;
		}
		else if (raw == "done") {
			return TaskStatus::DONE;
		}
		return TaskStatus::TO_DO;
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
