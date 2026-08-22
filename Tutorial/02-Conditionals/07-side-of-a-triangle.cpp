#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the first side: ";
    cin >> a;

    cout << "Enter the second side: ";
    cin >> b;

    cout << "Enter the third side: ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        
        cout << "It is a Triangle" << endl;
    } 
    else {
        cout << "It is not a Triangle" << endl;
    }

    return 0;
}