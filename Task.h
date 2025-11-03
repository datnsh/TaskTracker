#pragma once
#include <iostream>

enum class TaskPriority{LOW,HIGH,MEDIUM};
enum class TaskStatus{NOTSTARTED,INPROGRESS,PAUSE};
class Task 
{
public:

private:
	long long id;
	string name;
	long long duration;
};