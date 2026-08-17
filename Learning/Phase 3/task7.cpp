#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int arr[5];
    int count =0;

    cout<<"Enter 5 value as input\n";
    

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int key=5;
   
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            count ++; 
        }
    }

    cout<<"number of times the key element occurs is: "<<count;





    return 0;
}