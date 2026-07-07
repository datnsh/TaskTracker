#pragma once
#include <ParsedCommand.h>
#include "Helper.h"
class InputParser
{
public:
	InputParser();
	ParsedCommand ParseUserInput(const std::string& input);
};

