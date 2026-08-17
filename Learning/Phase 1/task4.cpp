#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int a;
    cout<<"Enter value of a: ";

    cin>>a;

    if(a>0){
        cout<<"a is positive number\n";
    }

    else if(a<0){
        cout<<"a is negative number\n";
    }

    else{
        cout<<"a is nor postive nor negative\n";
    }


    if(a%2==0){
        cout<<"a is even number\n";
    }

    else if(a%2!=0){
        cout<<"a is odd number\n";
    }

    else{
        cout<<"invalid input\n";
    }

    return 0;
}