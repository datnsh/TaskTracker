#pragma once
#include <ParsedCommand.h>
class InputParser
{
public:
	InputParser();
	ParsedCommand ParseUserInput(const std::string& input);
};

