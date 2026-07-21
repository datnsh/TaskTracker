#pragma once
#include <ParsedCommand.h>
#include "Helper.h"
#include <CommandType.h>
class InputParser
{
public:
	InputParser();
	ParsedCommand ParseUserInput(const std::string& input);
	CommandType ParseCommandType(const std::string& commandStr);
};

