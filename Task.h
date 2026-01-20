#pragma once
#include <iostream>
enum class TaskPriority{LOW,HIGH,MEDIUM};
enum class TaskStatus{TO_DO,IN_PROGRESS,DONE};
enum class TaskProperty{ID,DESCRIPTION,PRIORITY,STATUS};

class Task {

private:
	std::int64_t taskId;
	std::string description;
	/*TaskPriority taskPriority;*/
	TaskStatus taskStatus;
	std::string createdDate;
	std::string updatedDate;
public:
	/*Getter Setter*/
	Task();
	void SetTaskId(const std::int64_t& taskId);
	const std::int64_t GetTaskId();

	void SetTaskDescription(const std::string& description);
	const std::string GetTaskDescription();


	/*void SetTaskPriority(const TaskPriority& taskPriority);
	const TaskPriority GetTaskPriority();*/
	
	void SetTaskStatus(const TaskStatus& taskStatus);
	const TaskStatus GetTaskStatus();

	void SetTaskCreatedDate(const std::string& createdDate);
	const std::string GetTaskCreatedDate();

	void SetTaskUpdatedDate(const std::string& updatedDate);
	const std::string GetTaskUpdatedDate();


	/*-------------*/
};