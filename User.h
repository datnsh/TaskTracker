#pragma once
enum class userRole{EDITOR,WORKER};
class User
{
public:
	User::User();
	int User::getUsername() {};
	void User::setUsername(string username) {};

private:
	int ID;
	string username;
};

