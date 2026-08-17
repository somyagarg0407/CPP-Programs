#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int a = 5;
    int *p = &a;

    cout << "The value of a is: " << a << endl;
    cout << "The address of variable a is: " << p << endl;
    cout << "The value of a is: " << *p << endl;

    *p = 10;
    cout << "The updated value of a is: " << a << endl;

    return 0;
}