#include <iostream>
using namespace std;

// Base class A
class A {
private:
    int x = 5;         // Private: not accessible outside class
protected:
    int y = 10;        // Protected: accessible in derived class
public:
    int z = 15;        // Public: accessible everywhere

    void display() {
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    }
};

// Derived class B inherits from A
class B : public A {
public:
    void show() {
        // cout << x; // Error: 'x' is private in A
        cout << "y: " << y << ", z: " << z << endl;
    }
};

int main() {
    B b;
    b.show();

    return 0;
}

