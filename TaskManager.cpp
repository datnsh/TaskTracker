#include "TaskManager.h"

TaskManager::TaskManager()
{
	std::cout << "TaskManager initialized\n";
}

void TaskManager::AddTask(std::vector<std::string>& arguments)
{
	Task newTask;
	newTask.taskId = ++currentTaskId;
	newTask.description = Helper::JoinString(arguments);
	newTask.taskStatus = TaskStatus::TO_DO;
	newTask.createdDate = Helper::GetDateTime();
	newTask.updatedDate = Helper::GetDateTime();
	this->taskList[newTask.taskId] = newTask;
	std::cout << "Task added with Id: " <<  currentTaskId <<": " << taskList[currentTaskId].description << "\n";
}
template<typename T>
bool TaskManager::Update(std::int64_t& taskId, TaskProperty& property, T newValue)
{
	if (taskId != -1) {
		switch (property) {
		case TaskProperty::DESCRIPTION:
			taskList[taskId].description = newValue;
			break;
		case TaskProperty::PRIORITY:
			//taskList[taskId].taskPriority = newValue;
			break;
		case TaskProperty::STATUS:
			taskList[taskId].taskStatus = newValue;
			break;
		default:
			std::cout << "Invalid property\n";
			return false;
		}
	}
	else {
		std::cout << "Invalid task Id\n";
	}
}

void TaskManager::DeleteTask(int64_t& taskId)
{
	std::cout << "Deleting task with Id:" << taskId;

	//Update the json file
}


