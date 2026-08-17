#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string name;
    cout << "Enter the name of user: ";
    getline(cin, name);

    reverse(name.begin(), name.end());//--------------------------------------

    cout << "Reversed string: " << name;

    return 0;
}
