#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    int **pp = &p;

    cout << "The value of a is: " << a << endl;
    cout << "The value of a is: " << *p << endl;
    cout << "The value of a is: " << **pp << endl;

    **pp = 10;
    cout << "Updated value of a is: " << a << endl;

    return 0;
}