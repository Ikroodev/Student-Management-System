#include <iostream>
#include <string>
#include "../include/student.h"
using namespace std;

void studentModule() {
    cout << "\n===== STUDENT MODULE =====\n";
    int id;
    string name;

    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Student Added Successfully!\n";
    cout << "Name: " << name << ", ID: " <<id<<"\n";
}