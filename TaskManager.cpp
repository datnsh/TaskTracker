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
void TaskManager::UpdateTask(std::string& taskIdStr, std::string& propertyStr, std::string& newValueStr)
{
	std::int64_t taskId = std::stoll(taskIdStr);
	if (taskId != -1) {
		TaskProperty property = TaskParser::ParseStringToTaskProperty(propertyStr);
		switch (property) {
		case TaskProperty::DESCRIPTION:
			newValue = 
			taskList[taskId].description = std::get<std::string>(newValueStr);
			break;
		case TaskProperty::PRIORITY:
			taskList[taskId].taskPriority = newValueStr;
			break;
		case TaskProperty::STATUS:
			taskList[taskId].taskStatus = std::get<TaskStatus>(newValueStr);
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


