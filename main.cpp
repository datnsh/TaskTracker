#include "Controller.h"
#include <iostream>
#include <string>
#include <sstream>

// 
int main(int argc, char *argv[]) {
	Controller& c = Controller::GetInstance();
	string userInput;
	while (true) {
		cout << "Enter command:";
		getline(cin, userInput);
		if (userInput == "0") {
			break;
		}
		c.processInput(userInput);
		cout << "\n";
	}
	return 0;
}