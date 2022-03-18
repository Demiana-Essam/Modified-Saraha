#include "User.h"
#include<vector>


String^ User::getUserName()
{
	return userName;
}

void User::setUserName(String^ userName)
{
	this->userName = userName;
}

String^ User::getPassword()
{
	return password;
}

void User::setPassword(String^ password)
{
	this->password = password;
}

String^ User::getID()
{
	return ID;
}

void User::setID(String^ ID)
{
	this->ID = ID;
}
