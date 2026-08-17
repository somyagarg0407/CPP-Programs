#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfArray(int arr[],int size){
    int sum=0;

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int n;
    int array[10];

    cout<<"enter the size of array: \n";
    cin>>n;

    cout<<"enter elements of array: \n";

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

cout<<"Sum of elemnts of array are: "<<sumOfArray(array,n);

    return 0;
}