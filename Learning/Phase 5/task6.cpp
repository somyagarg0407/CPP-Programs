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

    int max=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
    }

    cout<<"MAximum element of all numbers is: "<<max;



    return 0;
}