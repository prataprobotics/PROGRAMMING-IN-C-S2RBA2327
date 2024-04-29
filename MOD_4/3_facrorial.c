#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials

    // Prompt the user for an integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is non-negative
    if (num < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
    } else {
        // Calculate the factorial using a loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Print the result
        printf("Factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}
