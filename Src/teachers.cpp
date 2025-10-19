#include <iostream>
#include <string>
#include "../include/student.h"
using namespace std;

void teacherModule() {
    cout << "\n===== Teacher MODULE =====\n";
    int id;
    string name;

    cout << "Enter Teacher ID: ";
    cin >> id;
    cout << "Enter Teacher Name: ";
    cin >> name;

    cout << "Teacher Added Successfully!\n";
    cout << "Name: " << name << ", ID: " <<id<<"\n";
}