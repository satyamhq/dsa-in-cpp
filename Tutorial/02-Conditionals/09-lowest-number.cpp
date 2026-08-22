#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the thirt number: ";
    cin >> c;

    if (a < b && a < c){
        cout << a << " is the lowest number.";
    }else if (b < a && b < c){
        cout << b << " is the lowest number.";
    }else{
        cout << c << " is the lowest number.";
    }
    return 0;
}