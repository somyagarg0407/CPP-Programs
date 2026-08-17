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

    int max=arr[0];
    int min=arr[0];

    for(int i=1;i<5;i++){

        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=1;i<5;i++){

        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"Maximum value is: "<<max;
    cout<<"\nminimum value is: "<<min;

    return 0;
}