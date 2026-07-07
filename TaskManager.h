#pragma once
#include "Task.h"
#include <iostream>
#include <map>
#include <format>
#include "Helper.h"

class TaskManager{
public:
	TaskManager();

	template<typename T>
	bool Update(int64_t& taskId, TaskProperty& property, T newValue);
	
	void DeleteTask(int64_t& taskId);

	void AddTask(std::vector<std::string>& arguments);
private:
	std::map<int64_t, Task> taskList;
	std::int64_t currentTaskId{};

};
