#include "account.h"
using namespace std;
Account::Account()
{
    strcpy(username,"");
    strcpy(password,"");
}

char *Account::get_username()
{
    return username;
}

char *Account::get_password()
{
    return password;
}

void Account::input(char u[64], char p[64])
{
    strcpy(username,u);
    strcpy(password,p);
}
