#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int arr[5];

    cout<<"Enter 5 value as input\n";
    

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}