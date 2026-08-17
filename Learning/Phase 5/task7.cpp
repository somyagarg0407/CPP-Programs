#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v;

    int x,n;

    cout<<"Enter how many numbers?: ";
    cin>>n;

    cout<<"Now enter the numbers:\n";
    for(int i=0;i<n;i++){
        cin>>x;    
        v.push_back(x);
    }

    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            evenCount++;
        }

        else{
            oddCount++;
        }
    }

    cout<<"Numbers of even numbers are: "<<evenCount;
    cout<<"\nNumbers of odd numbers are: "<<oddCount;

    return 0;
}