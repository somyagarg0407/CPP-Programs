#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int x;

    cout<<"ener value of a: ";
    cin>>x;

    if(x>10 && x<100){
        cout<<"entered number is valid";
    }

    else{
        cout<<"entered number is not valid";
    }

    return 0;
}