#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> numbers = {5, 2, 8, 1, 9, 3};

    // Display the original vector
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Display the sorted vector
    cout << "Sorted vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Add a new number to the vector
    numbers.push_back(7);

    // Display the vector after adding the new number
    cout << "Vector after adding 7: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove the last number from the vector
    numbers.pop_back();

    // Display the vector after removal
    cout << "Vector after removing the last element: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
