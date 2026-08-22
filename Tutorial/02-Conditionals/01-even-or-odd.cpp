#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the number: ";
    cin >> a;
    if (a % 2 == 0){
        cout << "The number is Even" <<endl;
    } else{
        cout << "The number is Odd";
    }
    return 0;
}