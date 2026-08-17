#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

        int n;
        cout<<"Enter the size of the array : "<<endl;
        cin>>n;

        int *arr= new int[n];

        for(int i =0;i<n;i++)
        {
            cin >> arr[i];
        }

        for(int i =0; i<n;i++)
        
        {
            cout<<  arr[i]<<endl;
        
        }
        
        delete[] arr;
        arr=nullptr;


    return 0;
}