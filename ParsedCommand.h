#pragma once
#include <iostream>
#include <vector>
#include <CommandType.h>
struct ParsedCommand
{
	CommandType command;
	std::vector<std::string> arguments;
	
};

