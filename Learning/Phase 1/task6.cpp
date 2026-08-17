#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int day;
    cout<<"Enter the number corresponding to day from 1 to7 corresponding to sunday to saturday sequencially\n";
    cin>>day;

    switch(day){

        case 1:
        cout<<"Day is sunday";
        break;
        case 2:
        cout<<"Day is monday";
        break;
        case 3:
        cout<<"Day is Tuesday";
        break;
        case 4:
        cout<<"Day is wednesday";
        break;
        case 5:
        cout<<"Day is thursday";
        break;
        case 6:
        cout<<"Day is friday";
        break;
        case 7:
        cout<<"Day is saturday";
        break;
        

        default:
        cout<<"Invalid day";

    }

    return 0;
}