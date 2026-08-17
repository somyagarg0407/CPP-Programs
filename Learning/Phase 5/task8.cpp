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

    reverse(v.begin(),v.end());


    cout<<"Your reveres vector is:- \n";

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<"\n";
    }

    return 0;
}