#include "InputParser.h"
#include <iostream>
#include <sstream>

InputParser::InputParser() {}

ParsedCommand InputParser::ParseUserInput(const std::string& input) {
	ParsedCommand parsedCommand;
	std::istringstream iss(input);
	std::string token;
	if (iss >> token) {
		parsedCommand.command = this->ParseCommandType(token);
		while (iss >> token) {
			parsedCommand.arguments.push_back(token);
		}
	}
	return parsedCommand;
}
CommandType InputParser::ParseCommandType(const std::string& token) {
	std::string cmd = token;
	Helper::StringToLower(cmd);
	if (cmd == "add") {
		return CommandType::Add;
	}
	else if (cmd == "remove") {
		return CommandType::Remove;
	}
	else if (cmd == "update") {
		return CommandType::Update;
	}
	else if (cmd == "list") {
		return CommandType::List;
	}
	else if (cmd == "help") {
		return CommandType::Help;
	}
	else if (cmd == "exit") {
		return CommandType::Exit;
	}
	else {
		throw std::invalid_argument("Invalid command: " + cmd);
	}
}
