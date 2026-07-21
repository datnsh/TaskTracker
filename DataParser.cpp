#include "DataParser.h"

bool DataParser::CreateDataFile(const std::string& filePath) {
	if(!std::filesystem::exists(filePath)){
		std::ofstream file(filePath);
		if (!file.is_open()) 
		{
			std::cout << "Failed to create file: " << filePath << std::endl;
		}
		file << "[]"; // Write an empty JSON array to the file
		file.close();
	}
	std::ofstream dataFile(filePath);
	if (!dataFile.is_open()) {
		std::cerr << "Failed to create data file: " << filePath << std::endl;
		return false;
	}
	dataFile.close();
	return true;
}

void DataParser::ParseDataFile(const std::string& data)
{
	std::cout << "Parsing data file: " << data << std::endl;
}

void DataParser::readDataFile(const std::string & filePath)
{
	std::cout << "Reading data file: " << filePath << std::endl;
}
