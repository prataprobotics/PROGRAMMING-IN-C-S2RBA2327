#include <stdio.h>

unsigned long long factorial(int num) {
    // Base case: factorial of 0 or 1 is 1
    if (num == 0 || num == 1) {
        return 1;
    }
    // Recursive case: factorial of num is num * factorial of num - 1
    return num * factorial(num - 1);
}

int main() {
    int number;
    
    // Prompt the user for an integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    // Check if the input is non-negative
    if (number < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
    } else {
        // Calculate the factorial using the recursive factorial function
        unsigned long long fact = factorial(number);
        // Print the result
        printf("Factorial of %d is %llu\n", number, fact);
    }
    
    return 0;
}
