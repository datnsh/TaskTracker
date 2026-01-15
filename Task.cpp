#include "Task.h"

std::int64_t Task::GetTaskId() {
	return taskId;
}

void Task::SetTaskId(const std::int64_t& taskId)
{
	this->taskId = taskId;
}

void Task::SetTaskDescription(const std::string& description)
{
	this->description = description;
}

std::string Task::GetTaskDescription()
{
	return description;
}

void Task::SetTaskPriority(const TaskPriority& taskPriority) 
{
	this->taskPriority = taskPriority;
}

TaskPriority Task::GetTaskPriority() {
	return taskPriority;
}

TaskStatus Task::GetTaskStatus() {
	return taskStatus;
}

void Task::SetTaskStatus(const TaskStatus& taskStatus) {
	this->taskStatus = taskStatus;
}

