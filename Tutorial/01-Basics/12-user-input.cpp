#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    int addition, subtraction, multiplication, division, modulus;

    addition = x + y;
    subtraction = x - y;
    multiplication = x * y;
    division = x / y;
    modulus = x % y;  // modulus operator
    
    cout << "addition: " << addition << endl;
    cout << "subtraction: " << subtraction << endl;
    cout << "multiplication: " << multiplication << endl;
    cout << "division: " << division << endl;
    cout << "modulus: " << modulus << endl;

    return 0;
}