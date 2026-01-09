#pragma once
#include "Task.h"
#include <iostream>
#include <vector>

class TaskManager{
public:
//Todo: Manages list of tasks, Create Task, Remove Task, Filter Task,
	TaskManager();
	void Update();
	void DeleteTask();
	void AddTask(Task& newTask);
	vector<Task> GetTaskList();
	void SetTaskList();
	std::int64_t GetAvailableId();
	void SetAvailableId();
private:
	vector<Task> taskList;
	std::int64_t availableId;
};