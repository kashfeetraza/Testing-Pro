#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swapping the values using pointers
    swapNumbers(&a, &b);

    cout << "After swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}
