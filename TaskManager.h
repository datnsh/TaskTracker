#pragma once
#include "Task.h"
#include <iostream>
#include <map>
#include <format>

class TaskManager{
public:
	TaskManager();

	template<typename T>
	bool Update(int64_t& taskId, TaskProperty& property, T newValue);
	
	void DeleteTask(int64_t& taskId);

	void AddTask(Task& newTask);

	void CreateNewTask(std::string& description);

};
