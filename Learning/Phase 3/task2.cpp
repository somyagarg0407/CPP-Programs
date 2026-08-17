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

    int sum=0;
    

    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }

    float average=(float)sum/5; //-------or sum/5.0-------

    cout<<"average is: "<<average;
    cout<<"\nsum of elements are: "<<sum;

    return 0;
}