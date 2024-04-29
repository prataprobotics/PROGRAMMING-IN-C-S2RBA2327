#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the triangle
    int number = 1; // Starting number

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Loop for each number in the current row
        for (int j = 1; j <= i; j++) {
            // Print the current number followed by a space
            printf("%d ", number);
            // Increment the current number
            number++;
        }
        // Print a newline character to move to the next row
        printf("\n");
    }

    return 0;
}
