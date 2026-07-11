#include "Controller.h"
Controller::Controller(TaskManager& taskManager, InputParser& inputParser) : taskManager(taskManager), parser(inputParser)
{
}

void Controller::Execute(ParsedCommand& cmd) {
	if (cmd.command == "add") {
		taskManager.AddTask(cmd.arguments);
	}
	else if (cmd.command == "update") {
		command.
	}
	else if (command.command == "remove") {
		std::cout << "Remove task\n";
	}
	else {
		std::cout << "Invalid command\n";
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
