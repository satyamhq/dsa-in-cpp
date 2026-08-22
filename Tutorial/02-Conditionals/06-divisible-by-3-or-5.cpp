#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n % 3 == 0 || n % 5 == 0){
        cout << "The number: " << n << " is disivisble by 3 or 5" <<endl;
    } else{
        cout << "The number: " << n << " is not disivisble by 3 or 5" <<endl;
    }
    return 0;
}