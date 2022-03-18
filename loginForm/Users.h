#pragma once
#include <string>
#include<vector>
#include"Messages.h"
using namespace std;
class Users
{
public:
	string Username;
	string password;
	string ID;
	vector<string> ListOfContacts;
	vector<Messages>Message;
	vector<Messages>sentMessages;
	void loadUserInfo();
	vector <Users> getUserInfo();
};

