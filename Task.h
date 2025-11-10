#pragma once
#include <QString>

enum class TaskPriority{LOW,HIGH,MEDIUM};
enum class TaskStatus{NOTSTARTED,INPROGRESS,PAUSE};
struct Task
{
	std::int64_t taskId;
	QString taskName;
	std::int64_t taskDuration;
	TaskPriority taskPriority;
	TaskStatus taskStatus;
};