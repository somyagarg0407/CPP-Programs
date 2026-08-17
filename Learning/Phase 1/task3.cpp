#include <iostream>
#include <string>

using namespace std;

int main() {

    int age;
    string name;
    bool has_ID;

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();   // -------------IMPORTANT---------------- to ignore new linw

    cout << "Enter your full name: ";
    getline(cin, name);// to get your full name with spaces

    cout<<"Are you have idetity card?\n";
    cin>> has_ID; 

    cout<<has_ID<<"\n";
    cout << "You are " << name << " and your age is " << age;

    return 0;
}
//------------------------------------------------------------------------------------
               //    endl	                   \n
               //New line + flush	      Only new line
               //Slower                	  Faster
               //More overhead	          Lightweight
//----------------------------------------------------------------------------------------