#include <iostream>
using namespace std;

class Engine {
public:
    Engine() {
        cout << "Engine initialized.\n";
    }
};

class Wheels {
public:
    Wheels() {
        cout << "Wheels initialized.\n";
    }
};

class Car : public Engine, public Wheels {
public:
    Car() {
        cout << "Car is ready.\n";
    }
};

int main() {
    Car myCar;  // Constructor order: Engine ? Wheels ? Car

    return 0;
}

