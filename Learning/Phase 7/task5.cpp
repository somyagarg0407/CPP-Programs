#include <iostream>
using namespace std;

void changeValue(int &a) {   // ---------------reference parameter------------
    a = 500;
}

int main() {

    int a = 5;

    changeValue(a);          // -------------------pass variable directly----------------

    cout << "The change in value of a will be: " << a << endl;

    return 0;
}
