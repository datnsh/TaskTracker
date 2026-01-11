#include "TaskManager.h"

TaskManager::TaskManager()
{
	vector<Task> taskList;
	std::int64_t availableId = 0;
}

std::int64_t TaskManager::GetAvailableId()
{
	return taskList.size();
}

void TaskManager::AddTask(Task& newTask)
{

	
	
}

void TaskManager::Update()
{

}

void TaskManager::DeleteTask()
{

}

vector<Task> TaskManager::GetTaskList()
{
	return vector<Task>();
}

void TaskManager::SetTaskList()
{
}

std::int64_t TaskManager::GetAvailableId()
{
	return std::int64_t();
}

void TaskManager::SetAvailableId()
{
}


