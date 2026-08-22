#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter the first side: ";
    cin >> a;

    cout << "Enter the first side: ";
    cin >> b;

    if (a == b){
        cout << "Square" <<endl;
    } else{
        cout << "Rectangle";
    }
    return 0;
}