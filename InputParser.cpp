#include "InputParser.h"
#include <iostream>
#include <sstream>

InputParser::InputParser() {}

ParsedCommand InputParser::ParseUserInput(const std::string& input) {
	ParsedCommand parsedCommand;
	std::istringstream iss(input);
	std::string token;
	if (iss >> token) {
		parsedCommand.command = token;
		while (iss >> token) {
			parsedCommand.arguments.push_back(token);
		}
	}
	return parsedCommand;
}
