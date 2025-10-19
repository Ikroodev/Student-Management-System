#include <iostream>
#include <string>
#include "../include/login.h"
using namespace std;

bool loginSystem() {
    string user, pass;
    cout << "\n===== LOGIN SYSTEM =====\n";
    cout << "Enter Username: ";
    cin >> user;
    cout << "Enter Password: ";
    cin >> pass;

    if (user == "admin" && pass == "1234") {
        cout << "Login Successful!\n";
        return true;
    } else {
        cout << "Invalid Credentials!\n";
        return false;
    }
}
