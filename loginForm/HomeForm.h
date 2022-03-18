#pragma once
#include"Users.h"
#include<vector>

ref class HomeForm
{
public:
	void setLiveUser(Users user);
	void uploadUserMessages();
	void uploadUserSentMessages();
	void uploadContanctsList();
	void addContact(string s);
	void sendMessage(Messages message);
	string getContact(int i);
	Users getLiveUser();
	void undoLastMsg();
	void addToFavourites(int msgIndex, bool msgDecision);
	Messages getMessage(int i);
	Messages getSentMessage(int i);
	
};

