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

    int key=5;
    bool found=false; //--------IMPORTANT FOR SEARCHING-----------

    for(int i=0;i<5;i++){
        if(arr[i]==key){
            found=true;
            break; // -------------IMPORTANT----------
        }
    }

    if(found==true){
        cout<<"element found";
    }

    else{
        cout<<"element not found";
    }

    return 0;
}