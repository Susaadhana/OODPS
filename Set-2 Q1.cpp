/* A car is a type of vehicle. Both share common details such as brand and speed, but a car additionally stores seating capacity.
 Design a C++ program in which the Car class reuses the common properties of Vehicle and displays complete car information.*/
#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    int speed;
};

class Car : public Vehicle {
public:
    int seats;

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Seating Capacity: " << seats << endl;
    }
};

int main() {
    Car c;
    c.brand = "Hyundai";
    c.speed = 120;
    c.seats = 5;

    c.display();
    return 0;
}