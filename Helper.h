#pragma once
#include <string>
#include <chrono>
#include <format>
class Helper
{
public:
	static void StringToLower(std::string& c);
	static std::string GetDateTime();
	static std::string JoinString(const std::vector<std::string>& words);
};

