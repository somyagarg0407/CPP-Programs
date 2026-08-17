#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int count=0;
    string name;
    cout<<"Enter the name of user";
    getline(cin,name);

    for(int i=0;i<name.length();i++){

        if(name[i]=='a' || name[i]=='e' ||name[i]=='i' ||name[i]=='o' ||name[i]=='u' ){

            count++;
        }
    }

    cout<<"The number of vowels in the given word is: "<<count;

    return 0;
}