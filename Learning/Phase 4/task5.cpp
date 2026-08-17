#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int findMax(int arr[],int size){

    int max=arr[0];

    for(int i=0;i<size;i++){

        if(arr[i]>max){
            max=arr[i];
        }
    }

    return max;


}
int main() {

    int n;
    int array[10];

    cout<<"enter the size(max = 10) of array: \n";
    cin>>n;

    cout<<"enter elements of array: \n";

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Maximum element of the array is : "<<findMax(array,n);

    return 0;
}