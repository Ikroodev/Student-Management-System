#include <iostream>
#include "../include/result.h"
using namespace std;

void resultModule() {
    cout << "\n===== RESULT MODULE =====\n";
    int m1, m2, m3;
    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    int total = m1 + m2 + m3;
    float avg = total / 3.0;

    cout << "Total: " << total << ", Average: " << avg;

    if (avg >= 80)
        cout << " -> Grade: A\n";
    else if (avg >= 60)
        cout << " -> Grade: B\n";
    else
        cout << " -> Grade: C\n";
}