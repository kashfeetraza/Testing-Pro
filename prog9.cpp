#include <iostream>
using namespace std;

// Base class with default constructor
class Parent {
public:
    Parent() {
        cout << "Parent default constructor\n";
    }
};

// Derived class
class Child : public Parent {
public:
    Child() {
        cout << "Child default constructor\n";
    }
};

int main() {
    Child c;  // Calls Parent constructor first, then Child constructor

    return 0;
}

