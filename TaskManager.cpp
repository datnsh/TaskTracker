#include "TaskManager.h"

TaskManager::TaskManager()
{
	std::cout << "TaskManager initialized\n";
}

void TaskManager::AddTask(std::vector<std::string>& arguments)
{
	Task newTask;
	newTask.taskId = currentTaskId++;
	newTask.description = Helper::JoinString(arguments);
	newTask.taskStatus = TaskStatus::TO_DO;
	newTask.createdDate = Helper::GetDateTime();
	newTask.updatedDate = Helper::GetDateTime();
	this->taskList[newTask.taskId] = newTask;
	std::cout << "Task added with Id:" <<  currentTaskId <<": " << taskList[currentTaskId].description << "\n";
}
template<typename T>
bool TaskManager::Update(std::int64_t& taskId, TaskProperty& property, T newValue)
{
	std::cout << "Updating task with Id:" << taskId;
}

void TaskManager::DeleteTask(int64_t& taskId)
{
	std::cout << "Deleting task with Id:" << taskId;

	//Update the json file
}


