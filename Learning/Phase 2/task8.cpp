#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    
    for(int i=1;i<=10;i++){
        if(i==4){
            continue;
        }

        cout<<i<<'\n';
    }


    return 0;
}