#include "TaskManager.h"

TaskManager::TaskManager()
{
	std::cout << "TaskManager initialized\n";
}

void TaskManager::AddTask(std::vector<std::string>& arguments)
{
	Task newTask;
	newTask.taskId = ++currentTaskId;
	newTask.description = Helper::JoinString(arguments);
	newTask.taskStatus = TaskStatus::TO_DO;
	newTask.createdDate = Helper::GetDateTime();
	newTask.updatedDate = Helper::GetDateTime();
	this->taskList[newTask.taskId] = newTask;
	std::cout << "Task added with Id: " <<  currentTaskId <<": " << taskList[currentTaskId].description << "\n";
}
void TaskManager::Update(std::int64_t& taskId, TaskProperty& property, const TaskValue& newValue)
{
	if (taskId != -1) {
		switch (property) {
		case TaskProperty::DESCRIPTION:
			taskList[taskId].description = std::get<std::string>(newValue);
			break;
		case TaskProperty::PRIORITY:
			//taskList[taskId].taskPriority = newValue;
			break;
		case TaskProperty::STATUS:
			taskList[taskId].taskStatus = std::get<TaskStatus>(newValue);
			break;
		default:
			std::cout << "Invalid property\n";
		}
	}
	else {
		std::cout << "Invalid task Id\n";
	}
}
void TaskManager::ListTask() {
	std::cout << "Task List:\n";
	for (const auto& [taskId, task] : taskList) {
		std::cout << "Task Id: " << taskId << "\n";
		std::cout << "Description: " << task.description << "\n";
		std::cout << "Status: " << TaskParser::TaskStatusToString(task.taskStatus) << "\n";
		std::cout << "Created Date: " << task.createdDate << "\n";
		std::cout << "Updated Date: " << task.updatedDate << "\n";
		std::cout << "-------------------------\n";
	}
}

void TaskManager::DeleteTask(int64_t& taskId)
{
	this->taskList.erase(taskId);

	//Update the json file
}


