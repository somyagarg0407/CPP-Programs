#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string name;//-------not use array symbol here--------   like that name[]
    cout<<"Enter the name of user";
    getline(cin,name);

    for(int i=0;i<name.length();i++){
        cout<<name[i]<<"\n";
    }

    return 0;
}