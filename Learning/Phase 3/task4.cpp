#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int arr[5];
    int countEven=0;
    int countOdd=0;

    cout<<"Enter 5 value as input\n";
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    for(int i=0;i<5;i++){

        if(arr[i]%2==0){
            countEven++;
        }

        else{
            countOdd++;
        }
    }

    cout<<"Number of even numbers are: "<<countEven;
    cout<<"\nNumber of odd numbers are: "<<countOdd;


    return 0;
}