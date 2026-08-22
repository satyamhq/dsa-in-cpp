#include <iostream>
using namespace std;

int main(){
    int cp, sp, profit;

    cout << "Enter the cost price: ";
    cin >> cp;

    cout << "Enter the selling price: ";
    cin >> sp;

    profit = sp - cp;

    if (cp < sp){
        cout << "You are making profit of: " << profit << endl; 
    } else if(cp > sp){
        cout << "You are making loss of: " << profit << endl; 
    }else{
        cout << "You are not making profit or loss." << endl;
    }
    return 0;
}