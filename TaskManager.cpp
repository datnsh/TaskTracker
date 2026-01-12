#include "TaskManager.h"

TaskManager::TaskManager()
{
	vector<Task> taskList;
	std::int64_t availableId = -1;
}

std::int64_t TaskManager::GetAvailableId()
{
	return taskList.size();
}

void createNewTask() {

}

void TaskManager::AddTask(Task& newTask)
{
	taskList.push_back(newTask);
}
template<typename T>
void TaskManager::Update(std::int64_t& taskId, TaskProperty& property, T newValue)
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

void TaskManager::SetAvailableId()
{
}


