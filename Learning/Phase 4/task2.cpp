#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void maxOfTwo(int a,int b){
    if(a>b){
        cout<<"First number is greater";
    }

    else if(b>a){
        cout<<"Second number is greater\n";
    }

    else if(a==b){
        cout<<"Both numbers are equal\n";
    }

    else{
        cout<<"Inavlid input\n";
    }
    
    
}

int main() {

    int x,y;

    cout<<"enter first and second number: \n";
    cin>>x>>y;

    maxOfTwo(x,y);

    return 0;
}