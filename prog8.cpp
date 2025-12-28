#include <iostream>
using namespace std;

// Base class with protected member
class Base {
protected:
    int a = 42;
};

// Derived class accessing protected member
class Derived : public Base {
public:
    void show() {
        cout << "Accessing protected member: " << a << endl;
    }
};

int main() {
    Derived d;
    d.show();

    return 0;
}

