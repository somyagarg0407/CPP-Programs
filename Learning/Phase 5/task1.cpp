#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string name;
    cout<<"Enter the name of user";
    getline(cin,name);

    cout<<"Your name is: "<<name;
    cout<<"\nLength of your name is: "<<name.length();
   

    return 0;
}