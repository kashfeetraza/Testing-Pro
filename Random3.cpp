#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    srand(time(0)); // Seed with time [1]
    int randomNum = rand() % 100 + 1; // 1-100
    std::cout << randomNum;
    return 0;
}
