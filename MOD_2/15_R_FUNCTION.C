#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive call to calculate factorial
    }
}

int main() {
    int num;
    
    // Input from user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    // Check if input is non-negative
    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1; // Return error code
    }
    
    // Calculate and print factorial
    printf("Factorial of %d = %llu\n", num, factorial(num));
    
    return 0;
}
