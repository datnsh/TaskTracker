#pragma once
#include <iostream>

class Controller {
public:
	Controller();
private:
	void processInput(std::string& userInput);
};