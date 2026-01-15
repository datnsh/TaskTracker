#include "Controller.h"

Controller::Controller() {
}
void Controller::processInput(string& userInput)
{
	stringstream ss;
	ss << userInput;
	int64_t inputId;
	string s;
	while (ss >> s) {
		stringstream value(s);
		if (value >> inputId) {
			cout << inputId;
		}
	}
}
