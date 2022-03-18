#pragma once
#include<iostream>
#include<vector>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


ref class User
{
public:
	String^ userName;
	String^ password;
	String^ ID;
	String^ getUserName();
	void setUserName(String^userName);
	String^ getPassword();
	void setPassword(String^ password);
	String^ getID();
	void setID(String^ ID);
};

