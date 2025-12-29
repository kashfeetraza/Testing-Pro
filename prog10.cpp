#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base(int a) {
        cout << "Base constructor: " << a << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived(int a, int b) : Base(a) {
        cout << "Derived constructor: " << b << endl;
    }
};

int main() {
    Derived d(5, 10);  // Calls both Base and Derived constructors

    return 0;
}

