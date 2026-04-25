#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    srand((unsigned) time(NULL)); // Seed [5]
    for(int i=1; i<=5; i++){
        int random = 100 + (rand() % 101); // 100-200 range [5]
        std::cout << random << " ";
    }
    return 0;
}
