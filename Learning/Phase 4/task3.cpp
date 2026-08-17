#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void printTables(int n){
    cout<<"Table of "<<n<<" is :\n";

    for(int i=1;i<=10;i++){
       
        cout<<n<<" X "<<i<<" = "<<n*i<<"\n";
    }
}

int main() {

    int a;

    cout<<"enter the value of a of which table will be written: ";
    cin>>a;

    printTables(a);


    return 0;
}