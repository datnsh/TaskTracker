#include "User.h"

User::User(std::int64_t id, QString username,QString password,UserRole userRole)
{
	this->id = id;
	this->username = username;
	this->password = password;
	this->userRole = userRole;
}

void User::setUserId(const int64_t& userId)
{
	this->id = userId;
}

const std::int64_t& User::getUserId()
{
	return id;
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
