#include "Helper.h"

void Helper::StringToLower(std::string& s) {
	for (auto& c : s) {
		c = tolower(c);
	}
}