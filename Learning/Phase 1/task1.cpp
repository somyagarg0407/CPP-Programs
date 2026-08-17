#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int a,b;

    cout<<"Enter value of a";
    cin>>a;
    cout<<"Enter value of b";
    cin>>b;

    cout<<"sum is : "<<a+b;
    cout<<"\ndifference  is : "<<a-b;
    cout<<"\nproduct is : "<<a*b;
    
    if (b != 0)//---------- Noted down-------------
        cout << "\nDivision is: " << (double)a / b;// this basically cast int a tp double a so that it can give a floating answer and also automatically convert b into float value
    else
        cout << "\nDivision not possible (b = 0)";


    return 0;
}