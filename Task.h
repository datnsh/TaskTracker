#pragma once
#include <iostream>
using namespace std;
enum class TaskPriority{LOW,HIGH,MEDIUM};
enum class TaskStatus{NOT_STARTED,IN_PROGRESS,PAUSE};
enum class TaskProperty{ID, NAME, DESCRIPTION, DURATION,PRIORITY, STATUS};

class Task {

private:
	std::int64_t taskId;
	std::string taskName;
	std::string description;
	std::int64_t taskDuration;
	TaskPriority taskPriority;
	TaskStatus taskStatus;
public:
	/*Getter Setter*/
	void SetTaskId(const std::int64_t& taskId);
	std::int64_t GetTaskId();
	
	void SetTaskName(const std::string& taskName);
	std::string GetTaskName();

	void SetTaskDescription(const std::string& description);
	std::string GetTaskDescription();

	void SetTaskDuration(const std::int64_t& taskDuration);
	std::int64_t GetTaskDuration();

	void SetTaskPriority(const TaskPriority& taskPriority);
	TaskPriority GetTaskPriority();
	
	void SetTaskStatus(const TaskStatus& taskStatus);
	TaskStatus GetTaskStatus();

	/*-------------*/


};