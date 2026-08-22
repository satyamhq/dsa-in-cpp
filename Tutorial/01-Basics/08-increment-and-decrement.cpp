#include<iostream>
using namespace std;

int main(){
    int x = 5;
    cout << x << endl;  //5

    x++;  // Post increment
    cout << x << endl;  // 6

    ++x;  // Pre increment
    cout << x << endl;  // 7

    x--;  // Post Decrement
    cout << x << endl;  //6

    --x;  // Pre Decrement
    cout << x << endl;  // 5

    return 0;
}