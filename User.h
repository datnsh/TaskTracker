#pragma once
#include <iostream>
#include <string>

enum class userRole{EDITOR,WORKER};
class User
{
public:
	User::User();
	int getUsername();
	void setUsername(std::string username);

private:
	long long ID;
	std::string username;
};

