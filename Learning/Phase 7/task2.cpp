#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int a = 10;
    int* p = &a;

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The address of a is: "<<p<<endl;
    cout<<"The value at address of a is: "<<&p<<endl;

    return 0;
}