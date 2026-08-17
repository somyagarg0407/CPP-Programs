#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    for(int i=1;i<=20;i++){
        
        if(i==15){
            break;
        }
        
        if(i%3==0){
            continue;
        }

        cout<<i<<"\n";
    }


    return 0;
}