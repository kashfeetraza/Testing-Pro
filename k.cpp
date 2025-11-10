#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    int *ptr;

    printf("Enter 5 numbers:\n");

    // Taking input using pointer
    ptr = numbers; // Point to the first element
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", ptr + i);  // Using pointer arithmetic
    }

    // Calculating sum using pointer
    ptr = numbers; // Reset pointer to start
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i); // Dereference to get value
    }

    printf("Sum of the numbers = %d\n", sum);

    return 0;
}
