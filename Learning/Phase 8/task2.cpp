#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int changeValue(int *p)
{
    *p = 100;
    return *p;
}

int main()
{
    int a = 5;
    int *p = &a;

    cout << "The value of a before updated: " << a << endl;
    cout << "The Value of a after updater: " << changeValue(p) << endl;

    return 0;
}