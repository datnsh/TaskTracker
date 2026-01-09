#include <QString>
#include "Task.h"

std::int64_t Task::GetTaskId() {
	return taskId;
}

void Task::SetTaskId(const std::int64_t& taskId)
{
	this->taskId = taskId;
}

void Task::SetTaskName(const std::string& taskName)
{
	this->taskName = taskName;
}

std::string Task::GetTaskName() {
	return taskName;
}

void Task::SetTaskDescription(const std::string& description)
{
	this->description = description;
}

std::string Task::GetTaskDescription()
{
	return description;
}

void Task::SetTaskDuration(const std::int64_t& taskDuration)
{
	this->taskDuration = taskDuration;
}

std::int64_t Task::GetTaskDuration()
{
	return taskDuration;
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

