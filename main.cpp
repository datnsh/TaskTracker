#include "Controller.h"
#include <iostream>
#include <string>
#include <sstream>

// 
int main(int argc, char *argv[]) {
	TaskManager taskManager;
	InputParser parser;
	Controller c(taskManager,parser);
	c.RunApp();
	return 0;
}