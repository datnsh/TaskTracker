#include "Controller.h"

Controller::Controller() : taskManager(TaskManager::GetInstance())
{
	static unordered_map<std::string, std::function<void()>> commands =
	{
		{"add",[&]() {
			Task newTask;
			taskManager.AddTask(newTask); 
		}}
	};
}
void Controller::toLower(string& s) {
	for (auto& c : s) {
		c = tolower(c);
	}
}
void Controller::processInput(string& userInput)
{
	stringstream ss(userInput);
	int64_t inputId;
	string command;
	string description;
	ss >> command;
	toLower(command);
	auto action = commands[command];
}
