#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class car{
public:
    string brand;
    int speed; 

    car(string b,int s){ //---------------Constructor---------------
        brand=b;
        speed=s;
    }

    void display(){
        cout<<"Name of the brand of the Car is: "<<brand<<endl;
        cout<<"The speed(in km/hour) of the car is : "<<speed<<endl;
    }
};


int main() {

    car c1("Maruti",250);
    c1.display();






    return 0;
}