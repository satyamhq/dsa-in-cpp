#include <iostream>
using namespace std;

int main(){
    int cp, sp, profit;

    cout << "Enter the cost price: ";
    cin >> cp;

    cout << "Enter the selling price: ";
    cin >> sp;

    if (cp < sp){
        cout << "You are making profit of: " << sp - cp << endl; 
    } else if(cp > sp){
        cout << "You are making loss of: " <<  cp -sp << endl; 
    }else{
        cout << "You are not making profit or loss." << endl;
    }
    return 0;
}