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
