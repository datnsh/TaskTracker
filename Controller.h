#pragma once
#include <iostream>
#include <sstream>
#include <TaskManager.h>

using namespace std;
class Controller {
public:
	
	static Controller& GetInstance() {
		static Controller instance;
		return instance;
	};

	Controller& operator=(const Controller&) = delete;

	Controller(const Controller&) = delete;
	void processInput(string& userInput);
private:
	static Controller instance;
	Controller();
};