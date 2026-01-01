#include <iostream> 
// Include input-output library
using namespace std; 
// Use standard namespace

class Movie { 
// Define Movie class
public:
    string name; 
// Variable for movie name
    float rating; 
// Variable for movie rating

    void display() { 
// Display function
        cout << "Movie Name: " << name << endl; 
// Show movie name
        cout << "Rating: " << rating << "/10" << endl;
// Show movie rating
    }
};

int main() {
    Movie m1; 
// Create Movie object

    m1.name = "Inception"; 
// Set name
    m1.rating = 8.8;
// Set rating

    m1.display(); 
// Call display method

    return 0; // Exit program
}

