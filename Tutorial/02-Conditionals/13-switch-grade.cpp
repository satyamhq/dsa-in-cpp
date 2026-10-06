#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter your grade (A/B/C/D): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent";
            break;

        case 'B':
            cout << "Very Good";
            break;

        case 'C':
            cout << "Good";
            break;

        case 'D':
            cout << "Pass";
            break;

        default:
            cout << "Invalid Grade";
    }

    return 0;
}