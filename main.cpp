#include "Controller.h"
#include <iostream>
#include <string>
#include <sstream>

// 
int main(int argc, char *argv[]) {
	Controller& c = Controller::GetInstance();
	string userInput;
	c.runApp();
	return 0;
}