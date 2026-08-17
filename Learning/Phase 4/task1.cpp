#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int square(int a){
    return (a*a);
}



int main() {
    
    int x;
    
    cout<<"Enter a number for doing its square: ";
    cin>>x;
    
    int squareOfNumber=square(x);
    
    cout<<"square of number is: "<<squareOfNumber;
    

    return 0;
}