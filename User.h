#pragma once
#include <iostream>
#include <QString>
#include <cstdint>

enum class UserRole{ADMIN,EDITOR,WORKER};
class User {
public:
	User(std::int64_t id,QString username, QString password, UserRole userRole);
	/*Getter Setter*/
	void setUserId(const int64_t& userId);
	const std::int64_t& getUserId();
	
	void setUsername(const QString& username);
	const QString& getUsername();

	void setUserRole(const UserRole& userRole);
	const UserRole& getUserRole();
	/*-------------*/
private:
	std::int64_t id;
	QString username;
	UserRole userRole;
	QString password;
};

