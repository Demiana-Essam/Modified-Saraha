#include "LoginForm.h"
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include <utility>
#include "Users.h"
#include "HomeForm.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using System::Runtime::InteropServices::Marshal;

ifstream UsersReader("users.txt");
Users tempUser;



LoginForm::LoginForm() {
    tempUser.loadUserInfo();
}

void LoginForm::CheckUser(String^ userID, String^ Userpassword)
{
    tempUser.loadUserInfo();
    isUserMatched = 0;
    for (int i = 0; i < tempUser.getUserInfo().size(); i++) {
        if (userID == gcnew String(tempUser.getUserInfo()[i].Username.c_str())) {
            if (Userpassword == gcnew String(tempUser.getUserInfo()[i].password.c_str())) {
                isUserMatched = 1;
                Users UserPushed;
                UserPushed.Username = tempUser.getUserInfo()[i].Username;
                UserPushed.password = tempUser.getUserInfo()[i].password;
                UserPushed.ID = tempUser.getUserInfo()[i].ID;
                HomeForm homeform;
                homeform.setLiveUser(UserPushed);
                break;
            }
        }
    }
}


