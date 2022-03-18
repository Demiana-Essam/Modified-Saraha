#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Users.h"

using namespace System;
using namespace System::Windows::Forms;


ref class LoginForm
{

public:

	int isUserMatched = 0;
	LoginForm::LoginForm();
	void CheckUser(String^ userID, String^ Userpassword);
};

