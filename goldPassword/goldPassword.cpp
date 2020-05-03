#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char randomString()
{
    return alphanum[rand() % stringLength];
}

int main()
{
    int length;
    SetConsoleTitle( TEXT("goldPassword - Password Generator by goldblack"));
    system("Color 0A");
    cout << "Please, enter password length: ";
    cin >> length;
    srand(time(0));
    string password;
    for (unsigned int i = 0; i < length; ++i)
        password += randomString();

    cout << password << endl;
    system("pause");

    return 0;
}