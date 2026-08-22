#include <iostream>
using namespace std;

int main(){
    int x = 5;
    cout << x << endl;  // 5
    x = 8;
    cout << x << endl;  // 8

    x = x + 7;    // = assignment operator 
    cout << x << endl;  // 15

    cout << x * x;  // 225
    
    return 0;
}