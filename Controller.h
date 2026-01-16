#pragma once
#include <iostream>
#include <sstream>
#include <TaskManager.h>
#include <unordered_map>
#include <functional>
class Controller {
public:
	
	static Controller& GetInstance() {
		static Controller instance;
		return instance;
	};

	Controller& operator=(const Controller&) = delete;

	Controller(const Controller&) = delete;
	void processInput(string& userInput);
	void toLower(string& s);
private:
	Controller();
	TaskManager& taskManager;
	static unordered_map<std::string, std::function<void()>> commands;
};