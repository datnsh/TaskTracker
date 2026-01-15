#include "TaskManager.h"



TaskManager::TaskManager()
{
	map<int64_t,Task> taskList;
	int64_t availableId = -1;
}

int64_t TaskManager::GetAvailableId()
{
	return this->availableId;
}

void TaskManager::createNewTask() {
	Task newTask = Task();
	int64_t taskId = GetAvailableId();
	newTask.SetTaskId(taskId);
}

void TaskManager::AddTask(Task& newTask)
{
	int64_t taskId = newTask.GetTaskId();
	if (taskList.count(taskId) == 0) {
		taskList[taskId] = newTask;
	}
	else {
		cout << "Can't add task, duplicated ID";
	}
}
template<typename T>
bool TaskManager::Update(std::int64_t& taskId, TaskProperty& property, T newValue)
{
	Task* task = taskList[taskId];
	if (!task) {
		cout << "No task with Id:" << taskId;
		return false;
	}
	switch (property)
	{
	case TaskProperty::NAME:
		task->SetTaskName(&newValue);
	case TaskProperty::STATUS:
		task->SetTaskStatus(&newValue);
	case TaskProperty::PRIORITY:
		task->SetTaskPriority(&newValue);
	case TaskProperty::DESCRIPTION:
		task->SetTaskDescription(&newValue);
	case TaskProperty::DURATION:
		task->SetTaskDuration(&newValue);
	case TaskProperty::ID:
		task->SetTaskId(&newValue);
	default:
		cout << "This operation is not allowed";
		break;
	}
}

void TaskManager::DeleteTask(int64_t& taskId)
{
	cout << "Deleting task with Id:" << taskId;
	this->taskList.erase(taskId);
	if (taskList.find(taskId) == taskList.end()) {
		cout << "Task Deleted";
	}
	else {
		cout << "Something went wrong";
	}

	//Update the json file
}

map<int64_t, Task> TaskManager::GetTaskList()
{
	return this->taskList;
}

void TaskManager::SetTaskList(map<int64_t,Task>& taskList)
{
	this->taskList = taskList;
}

void TaskManager::SetAvailableId(std::int64_t& availableId)
{
	this->availableId = availableId;
}


