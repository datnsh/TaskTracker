#pragma once
#include <iostream>
#include <sstream>
#include <TaskManager.h>
#include <queue>
#include <Helper.h>
class Controller {
public:
	
	static Controller& GetInstance() {
		static Controller instance;
		return instance;
	};

	Controller& operator=(const Controller&) = delete;

	Controller(const Controller&) = delete;
	queue<string> processInput(string& userInput);
	void processCommand(string& userInput);
	void AddTask(string& userInput);
	void UpdateTask(string& userInput);
	void RemoveTask(string& userInput);
	void runApp();
private:
	Controller();
	TaskManager& taskManager;
};