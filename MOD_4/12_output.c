#include <stdio.h>

int main() {
    int number = 663312;  // The number whose sum of digits we want to find
    int output = 0;

    // Calculate the sum of digits
    while (number > 0) {
        // Get the last digit
        int digit = number % 10;
        
        // Add the digit to the sum
        output += digit;
        
        // Remove the last digit from the number
        number = number / 10;
    }

    // Print the sum of digits
    printf("The output is: %d\n", output);

    return 0;
}
