#include <iostream> 
// Include input-output library
using namespace std; 
// Use standard namespace

class City { 
// Define a class named City
public:
    string name; 
// Variable to store city name
    int population; 
// Variable to store population

    void display() { 
// Function to print city details
        cout << "City Name: " << name << endl; 
// Print city name
        cout << "Population: " << population << endl;
// Print population
    }
};

int main() {
    City c1; 
// Create a City object

    c1.name = "New York"; 
// Assign city name
    c1.population = 8500000; 
// Assign population

    c1.display(); 
// Call display method

    return 0; 
// Program ends
}

