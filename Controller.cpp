#include "Controller.h"

Controller::Controller()
{
}

void Controller::processInput(std::string& userInput)
{

}

void Controller::runApp() {
	std::string userInput;
	std::cout << "Enter command:\n";
	std::getline(std::cin, userInput);
	std::stringstream ss;
	ss << userInput;
	std::int64_t inputId;
	std::string s;
	while (ss >> s) {
		std::stringstream value(s);
		if (value >> inputId) {
			std::cout << inputId;
		}
	}
}
