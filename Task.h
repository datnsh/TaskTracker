#pragma once
#include <QString>

enum class TaskPriority{LOW,HIGH,MEDIUM};
enum class TaskStatus{NOTSTARTED,INPROGRESS,PAUSE};
class Task {
public:
	Task(std::int64_t taskId, QString taskName, std::int64_t taskDuration, TaskPriority taskPriority,);
	/*Getter Setter*/
	void setTaskId(std::int64_t taskId);
	std::int64_t getTaskId();
	
	void setTaskName(QString taskName);
	QString getTaskName();

	void setTaskDuration(std::int64_t taskDuration);
	std::int64_t getTaskDuration();

	void setTaskPriority(TaskPriority taskPriority);
	TaskPriority getTaskPriority();
	
	void setTaskStatus(TaskStatus taskStatus);
	TaskStatus getTaskStatus();

	/*-------------*/

private:
	std::int64_t taskId;
	QString taskName;
	std::int64_t taskDuration;
	TaskPriority taskPriority;
	TaskStatus taskStatus;
};