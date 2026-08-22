#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n >= 99 and n <= 999){    // and = &&
        cout << "The number: " << n << " is a three digit number." << endl;
    } else{
        cout << "The number: " << n << " is not a three digit number." <<endl; 
    }
    return 0;
}