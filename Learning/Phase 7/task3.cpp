#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int a =10;
    int * p=&a;

    cout<<"The value of a(before changing) is : "<<a<<endl;

    *p=20;

    cout<<"The value of a (after changing) is : "<<a<<endl;

    return 0;
}