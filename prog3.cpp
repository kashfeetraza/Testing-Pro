#include <iostream>
using namespace std;

// Base class: Shape
class Shape {
public:
    Shape(string s) {
        cout << "Shape: " << s << endl;
    }
};

// Derived class: Circle inherits from Shape
class Circle : public Shape {
public:
    Circle() : Shape("Circle") {}
};

// Another derived class: Square inherits from Shape
class Square : public Shape {
public:
    Square() : Shape("Square") {}
};

int main() {
    Circle c;
    Square s;

    return 0;
}

