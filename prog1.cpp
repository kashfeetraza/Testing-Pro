#include <iostream>
using namespace std;

// Base class: Animal
class Animal {
public:
    // Parameterized constructor for Animal
    Animal(string type) {
        cout << "Animal type: " << type << endl;
    }
};

// Derived class: Dog inherits from Animal
class Dog : public Animal {
public:
    // Dog constructor passes 'type' to Animal using initializer list
    Dog(string type) : Animal(type) {
        cout << "Dog constructor called.\n";
    }
};

int main() {
    // Creating Dog object calls both constructors
    Dog d("Mammal");

    return 0;
}

