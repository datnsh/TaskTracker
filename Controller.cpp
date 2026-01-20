#include "Controller.h"

Controller::Controller() : taskManager(TaskManager::GetInstance())
{
	TaskManager& taskManager = TaskManager::GetInstance();
}
void Controller::AddTask(queue<string>& inputQueue) {
	std::string taskDescription;
	while (!inputQueue.empty()) {
		taskDescription.append(this->GetNextInput(inputQueue));
		taskDescription.append(" ");
	}
	cout << taskDescription;
}
// Update ID "Description"
void Controller::UpdateTask(string& userInput) {
	std::string taskId = this->GetNextInput(inputQueue);
	std::string updateDescription = this->GetNextInput(inputQueue);
	cout << "Task ID:" << taskId << "update description:" << updateDescription;
}
void Controller::RemoveTask(string& userInput){
	std::string taskId = this->GetNextInput(inputQueue);
	cout << "Removing task with ID:" << taskId;
}

void Controller::processInput(string& userInput)
{
	std::string command = userInput[0];
	Helper::StringToLower(command);
	if (command == "add") {
		this->AddTask(string& userInput);
	}
	else if (command == "update") {
		this->UpdateTask(string& userInput);
	}
	else if (command == "remove") {
		this->RemoveTask(string& userInput);
	}
}

void Controller::runApp() {
	std::string userInput;
	std::cout << "Input 0 to exit program\n";
	while (userInput != "0") {
		std::cout << "Enter command:";
		std::getline(cin, userInput);
		this->processInput(userInput);
		std::cout << "\n";
	}
}
