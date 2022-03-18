#pragma once
#include<iostream>
#include<fstream>
#include"Users.h"

using namespace System;
using namespace System::Windows::Forms;

ref class RegisterForm
{
private:
	static int registerState = 0;
public:
	RegisterForm();
	void RegisterCheck(String^ liveUserName,String^ ID,String^ livePassword,String^ livePasswordConfirm);
	void setRegisterState(int registerState);
	int getRegisterState();
};

