#pragma once
#include <iostream>
enum class TaskPriority
{
	LOW,
	HIGH,
	MEDIUM
};
enum class TaskStatus
{
	TO_DO,
	IN_PROGRESS,
	DONE
};
enum class TaskProperty{
	ID,
	DESCRIPTION,
	PRIORITY,
	STATUS
};

struct Task {
	std::int64_t taskId;
	std::string description;
	/*TaskPriority taskPriority;*/
	TaskStatus taskStatus;
	std::string createdDate;
	std::string updatedDate;
};