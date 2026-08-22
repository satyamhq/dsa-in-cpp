#include <iostream>
using namespace std;

int main(){
    float a;
    a = 4 + 2 % -8;   // a % (-b) = a % b,  a % b  = a if a < b
    cout << a;  // 6

    return 0;
}