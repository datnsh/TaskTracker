#pragma once
#include "Task.h"
#include <iostream>
#include <map>
#include <format>
#include "Helper.h"
#include <TaskParser.h>
#include <variant>
#include <TaskTypes.h>

class TaskManager{
public:
	TaskManager();

	void UpdateTask(std::string& taskIdStr, std::string& propertyStr, std::string& newValueStr);
	
	void DeleteTask(int64_t& taskId);

	void AddTask(std::vector<std::string>& arguments);

	void ListTask();
	void ListTask(TaskStatus& taskStatus);
private:
	std::map<int64_t, Task> taskList;
	std::int64_t currentTaskId{};

};
