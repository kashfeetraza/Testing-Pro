#include <iostream>
#include <cstdlib>
int main() {
    int randomNum = rand() % 101; // Generates 0-100 [1]
    std::cout << randomNum;
    return 0;
}
