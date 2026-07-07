#include "Helper.h"

void Helper::StringToLower(std::string& s) {
	for (auto& c : s) {
		c = tolower(c);
	}
}

std::string Helper::GetDateTime() {
	auto now = std::chrono::system_clock::now();
	std::string dateTimeStr = std::format("{:%Y-%m-%d %H:%M:%S}", now);
	return dateTimeStr;
}

std::string Helper::JoinString(const std::vector<std::string>& words)
{
	std::ostringstream oss;
	for (const auto& word : words) {
		oss << word << " ";
	}
	return oss.str();
}
