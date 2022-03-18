#include "RegisterForm.h"
#include<iostream>
#include<fstream>
#include<vector>
#include "MyForm.h"
using namespace std;
Users UserChecking;
ofstream usersFileUpdate("users.txt", ios::app);

RegisterForm::RegisterForm() {
    UserChecking.loadUserInfo();
}



void RegisterForm::RegisterCheck(String^ liveUserName, String^ ID, String^ livePassword, String^ livePasswordConfirm)
{
    UserChecking.ID = toStandardString(ID);
    UserChecking.Username = toStandardString(liveUserName);
    UserChecking.password = toStandardString(livePassword);
    for (int i = 0; i < UserChecking.getUserInfo().size(); i++) {
        if (liveUserName == gcnew String(UserChecking.getUserInfo()[i].Username.c_str())) {
            registerState = 1;
            break;
        }
    }
    if (livePassword != livePasswordConfirm) {
        registerState = 2;
        cout << "passwords doesn't match" << endl;
    }
    if (registerState == 0) {
        usersFileUpdate << UserChecking.Username;
        usersFileUpdate << " ";
        usersFileUpdate << UserChecking.password;
        usersFileUpdate << " ";
        usersFileUpdate << UserChecking.ID;
        usersFileUpdate << "\n";
        UserChecking.getUserInfo().push_back(UserChecking);
    }
    usersFileUpdate.close();
}

void RegisterForm::setRegisterState(int registerState)
{
    RegisterForm::registerState = registerState;
}

int RegisterForm::getRegisterState()
{
	return registerState;
}

