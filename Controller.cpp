#include "Controller.h"
Controller::Controller(TaskManager& taskManager, InputParser& inputParser) : taskManager(taskManager), m_parser(inputParser)
{
}

void Controller::Execute(std::string& command) {
	if (command == "add") {
		std::cout << "Add task\n";
	}
	else if (command == "update") {
		std::cout << "Update task\n";
	}
	else if (command == "remove") {
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

		ParsedCommand command = this->m_parser.ParseUserInput(userInput);
		Execute(command.command);
		
		std::cout << "\n";
	}
}
