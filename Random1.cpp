#include <iostream>
#include <random> // Modern random library [4]
int main() {
    std::random_device rd; // Seed
    std::mt19937 gen(rd()); // Generator
    std::uniform_int_distribution<> dis(1, 10); // Range 1-10
    std::cout << dis(gen);
    return 0;
}
