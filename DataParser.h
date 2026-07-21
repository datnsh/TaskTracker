#pragma once
#include <fstream>
#include <iostream>
class DataParser
{
	bool CreateDataFile(const std::string& filePath);
	void ParseDataFile(const std::string& data);
	void readDataFile(const std::string& filePath);
};

