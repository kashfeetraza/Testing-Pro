#include <iostream>
using namespace std;

// Base class
class Appliance {
public:
    void plugIn() {
        cout << "Appliance plugged in.\n";
    }
};

// Derived class adds a new method
class Toaster : public Appliance {
public:
    void toast() {
        cout << "Toasting bread...\n";
    }
};

int main() {
    Toaster t;
    t.plugIn();  // Inherited from Appliance
    t.toast();   // Defined in Toaster

    return 0;
}

