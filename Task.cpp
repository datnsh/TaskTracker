#include "Task.h"

void Task::setTaskId(const std::int64_t& taskId)
{
	this->taskId = taskId;
}

void Task::setTaskName(const QString& taskName)
{
	this->taskName = taskName;
}

void Task::setTaskDuration(const std::int64_t& taskDuration)
{
	this->taskDuration = taskDuration;
}

void Task::setTaskPriority(const TaskPriority& taskPriority) 
{
	this->taskPriority = taskPrioriy;
}
