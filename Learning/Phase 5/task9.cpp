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

    int key;
    cout<<"Enter the key elements to be searched for: ";
    cin>>key;

    bool found=false;

    for(int i=0;i<v.size();i++){

        if(key==v[i]){
            found=true;
            break;   // ---- optimization ----
        }
    }

    if(found){
        cout<<"Entered key element is found ! :)";
    }

    else{
        cout<<"Entered key element is not found ! :(";
    }


    return 0;
}