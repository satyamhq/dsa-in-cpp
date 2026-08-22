#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    if ((n % 3 == 0 || n % 5 == 0) && n % 15 != 0) {
        cout << "The number: " << n
             << " is divisible by 3 or 5 and not divisible by 15" << endl;
    } 
    else {
        cout << "The condition is not satisfied." << endl;
    }

    return 0;
}