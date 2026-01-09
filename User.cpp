#include "User.h"

void User::setUserId(const int64_t& userId)
{
	this->id = userId;
}

const std::int64_t User::getUserId()
{
	return this->id;
}

void User::setUsername(const QString& username)
{
	this->username = username;
}

const QString& User::getUsername()
{
	return username;
}

void User::setUserRole(const UserRole& userRole)
{
	this->userRole = userRole;
}

const UserRole& User::getUserRole()
{
	return userRole;
}
