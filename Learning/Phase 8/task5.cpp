    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {

        int *p= new int;
        *p=100;
        cout<<"Value of dynamiicaly allocated int : "<<*p<<endl;
        
        delete p;
        p=nullptr;  

        cout<<"-------------------------------------------------------";

        int n;
        cout<<"Enter the size of the array : "<<endl;
        cin>>n;

        int *arr= new int[n];

        for(int i =0;i<n;i++)
        {
            arr[i]= i*2;
        }

        for(int i =0; i<n;i++)
        
        {
            cout<<  arr[i]<<endl;
        
        }
        
        delete[] arr;
        arr=nullptr;


        return 0;
    }