#pragma once
#include "User.h"
#include <vector>

class UserManager {
public:
	UserManager();

private:
	std::vector<User> UserList;
	void getData();
	void createUser();
	void addUser(User::User newUser);

}