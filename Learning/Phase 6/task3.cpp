#include <iostream>
#include <string>
using namespace std;

class car {
public:
    string brand;

    void setSpeed(int s) {     // PUBLIC
        if (s < 0) {
            cout << "Invalid speed\n";
        } else {
            speed = s;
        }
    }

    int getSpeed() {           // PUBLIC
        return speed;
    }

private:
    int speed;                 // PRIVATE
};

int main() {

    car c1;
    c1.brand = "Maruti";

    c1.setSpeed(280);          // ✔ correct way

    cout << "Car brand: " << c1.brand << endl;
    cout << "Car speed: " << c1.getSpeed() << endl;

    return 0;
}
