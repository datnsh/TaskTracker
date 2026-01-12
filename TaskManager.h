#pragma once
#include "Task.h"
#include <iostream>
#include <vector>

class TaskManager{
public:
//Todo: Manages list of tasks, Create Task, Remove Task, Filter Task,
	TaskManager();
	template <typename T>
	void Update(std::int64_t& taskId, TaskProperty& property, T newValue);
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
