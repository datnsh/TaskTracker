#pragma once
#include <iostream>
using namespace std;
enum class TaskPriority{LOW,HIGH,MEDIUM};
enum class TaskStatus{NOT_STARTED,IN_PROGRESS,PAUSE};
enum class TaskProperty{ID,DESCRIPTION,PRIORITY,STATUS};

class Task {

private:
	int64_t taskId;
	string description;
	TaskPriority taskPriority;
	TaskStatus taskStatus;
public:
	/*Getter Setter*/
	void SetTaskId(const int64_t& taskId);
	int64_t GetTaskId();
	
	void SetTaskName(const string& taskName);
	string GetTaskName();

	void SetTaskDescription(const string& description);
	string GetTaskDescription();


	void SetTaskPriority(const TaskPriority& taskPriority);
	TaskPriority GetTaskPriority();
	
	void SetTaskStatus(const TaskStatus& taskStatus);
	TaskStatus GetTaskStatus();

	/*-------------*/
};