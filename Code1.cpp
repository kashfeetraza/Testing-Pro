#include <iostream>
using namespace std;

// Function to calculate the sum of an array
int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The sum of the array is: " << sumArray(arr, size) << endl;
    
    return 0;
}
