#pragma once
#include "Task.h"
#include <iostream>
#include <map>

using namespace std;

class TaskManager{
public:
//Todo: Manages list of tasks, Create Task, Remove Task, Filter Task,
	static TaskManager& GetInstance() 
	{
		static TaskManager instance;
		return instance;
	};

	TaskManager(const TaskManager&) = delete;

	TaskManager& operator=(const TaskManager&) = delete;
	
	template <typename T>
	bool Update(int64_t& taskId, TaskProperty& property, T newValue);
	
	void DeleteTask(int64_t& taskId);

	void AddTask(Task& newTask);

	Task CreateNewTask(string& description);

	map<int64_t,Task> GetTaskList();
	void SetTaskList(map<int64_t,Task>& taskList);

	int64_t GetAvailableId();
	void SetAvailableId(int64_t& availableId);

private:
	map<int64_t, Task> taskList;
	int64_t availableId;
	TaskManager();
};
