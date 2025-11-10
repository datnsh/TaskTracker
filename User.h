#pragma once
#include <iostream>
#include <QString>
#include <cstdint>

enum class UserRole{EDITOR,WORKER};
struct User {
	std::int64_t userId;
	QString username;
	UserRole userRole;
};

