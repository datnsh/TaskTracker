#include "Task.h"

Task::Task() : taskId(-1), description(""),createdDate(""),updatedDate(""), taskStatus(TaskStatus::TO_DO) {
}

const std::int64_t Task::GetTaskId() {
	return this->taskId;
}

void Task::SetTaskId(const std::int64_t& taskId)
{
	this->taskId = taskId;
}

void Task::SetTaskDescription(const std::string& description)
{
	this->description = description;
}

const std::string Task::GetTaskDescription()
{
	return this->description;
}

//void Task::SetTaskPriority(const TaskPriority& taskPriority) 
//{
//	this->taskPriority = taskPriority;
//}
//
//TaskPriority Task::GetTaskPriority() {
//	return this->taskPriority;s
//}
//
const TaskStatus Task::GetTaskStatus() {
	return this->taskStatus;
}

void Task::SetTaskStatus(const TaskStatus& taskStatus) {
	this->taskStatus = taskStatus;
}

void Task::SetTaskCreatedDate(const std::string& createdDate) {
	this->createdDate = createdDate;
}

const std::string Task::GetTaskCreatedDate() {
	return this->createdDate;
}

void Task::SetTaskUpdatedDate(const std::string& updatedDate)
{
	this->updatedDate = updatedDate;
}

const std::string Task::GetTaskUpdatedDate()
{
	return this->updatedDate;
}

