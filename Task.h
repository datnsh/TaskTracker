#pragma once
#include <iostream>
#include<string>

enum class TaskPriority{LOW,HIGH,MEDIUM};
enum class TaskStatus{NOTSTARTED,INPROGRESS,PAUSE};
class Task 
{
public:
	void setID(long long id);
	long long getID();
	void setName(std::string name);
private:
	long long id;
	std::string name;
	long long duration;
};