#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class car{
public://---------------------IMPORTANT------------------
    string brand;
    int speed; 

    void display(){
        cout<<"Name of the brand of the Car is: "<<brand<<endl;
        cout<<"The speed(in km/hour) of the car is : "<<speed<<endl;
    }
};//--------------------------------IMPORTANT (;)---------------------------

int main() {

    car c1;//--------------OBject creation------------
    c1.brand="Mercedes-Benz";
    c1.speed=280;

    c1.display();


    return 0;
}