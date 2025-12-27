#include <iostream>
using namespace std;

// Base class: Vehicle
class Vehicle {
public:
    Vehicle(string type) {
        cout << "Vehicle type: " << type << endl;
    }
};

// Intermediate derived class: Car inherits from Vehicle
class Car : public Vehicle {
public:
    Car(string model) : Vehicle("Four Wheeler") {
        cout << "Car model: " << model << endl;
    }
};

// Final derived class: ElectricCar inherits from Car
class ElectricCar : public Car {
public:
    ElectricCar(string brand) : Car("Sedan") {
        cout << "Electric Car brand: " << brand << endl;
    }
};

int main() {
    // Constructor chain: Vehicle ? Car ? ElectricCar
    ElectricCar e("Tesla");

    return 0;
}

