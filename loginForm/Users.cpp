#include "Users.h"
#include <fstream>

using namespace std;
static vector <Users> users;

void Users::loadUserInfo()
{
    ifstream usersFile("users.txt");
    Users tempUser;

    string s1, s2, s3;
    while (usersFile) {
        usersFile >> s1;
        usersFile >> s2;
        usersFile >> s3;
        if (s1 == "-1")
            break;

        tempUser.Username = s1;
        tempUser.password = s2;
        tempUser.ID = s3;
        users.push_back(tempUser);
    }
    usersFile.close();
    users.pop_back();
    }

vector <Users> Users::getUserInfo()
{
    return users;
}


