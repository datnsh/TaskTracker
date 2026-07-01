#include "TaskManager.h"

void TaskManager::CreateNewTask(std::string& description) {
	std::cout << "Creating new task with description:" << description;
}

void TaskManager::AddTask(Task& newTask)
{
	std::cout << "Add task with Id:" << newTask.taskId;
}
template<typename T>
bool TaskManager::Update(std::int64_t& taskId, TaskProperty& property, T newValue)
{
	std::cout << "Updating task with Id:" << taskId;
}

TaskManager::TaskManager(){}

void TaskManager::DeleteTask(int64_t& taskId)
{
	std::cout << "Deleting task with Id:" << taskId;

	//Update the json file
}


