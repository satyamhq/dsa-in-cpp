#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n >= 0){
        cout << "The number: " << n << "is absloute" <<endl;
    } else{
        cout << -(n);
    }
    return 0;
}