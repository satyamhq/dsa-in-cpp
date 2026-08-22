#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    int addition, subtraction, multiplication, division;

    addition = x + y;
    subtraction = x - y;
    multiplication = x * y;
    division = x / y;
    
    cout << "addition: " << addition << endl;
    cout << "subtraction: " << subtraction << endl;
    cout << "multiplication: " << multiplication << endl;
    cout << "division: " << division << endl;

    return 0;
}