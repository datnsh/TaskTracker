#pragma once
#include <iostream>
#include <QString>
#include <cstdint>

enum class UserRole{ADMIN,EDITOR,WORKER};
class User {
public:
	/*Getter Setter*/
	void setUserId();
	std::int64_t getUserId();
	
	void setUsername();
	QString getUsername();

	void setUserRole();
	UserRole getUserRole();
	/*-------------*/
private:
	std::int64_t userId;
	QString username;
	UserRole userRole;
};

