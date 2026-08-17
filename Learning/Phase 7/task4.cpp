#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



void changeValue( int *p){
    *p=500;
   
}

int main() {

    int a=5;
    int*p=&a;
    changeValue(p);//-------------IMP: here we have to use only p not *p because p itself is a pointer but in function parameter we have to use *p ----------------
    cout<<"The change in value of a will be: "<<a<<endl;
    
    return 0;
}