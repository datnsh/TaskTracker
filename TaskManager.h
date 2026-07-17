#pragma once
#include "Task.h"
#include <iostream>
#include <map>
#include <format>
#include "Helper.h"
#include <variant>
#include <TaskParser.h>

using TaskValue = std::variant<int64_t,std::string, TaskStatus>;

class TaskManager{
public:
	TaskManager();

	void Update(int64_t& taskId, TaskProperty& property, const TaskValue& newValue);
	
	void DeleteTask(int64_t& taskId);

	void AddTask(std::vector<std::string>& arguments);

	void ListTask();
	void ListTask(TaskStatus& taskStatus);
private:
	std::map<int64_t, Task> taskList;
	std::int64_t currentTaskId{};

};
