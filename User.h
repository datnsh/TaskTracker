#pragma once
#include <QString>
#include <iostream>
using namespace std;

enum class UserRole{ADMIN,EDITOR,WORKER};
class User {
public:
	void setUserId(const int64_t& userId);
	const std::int64_t getUserId();
	
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

