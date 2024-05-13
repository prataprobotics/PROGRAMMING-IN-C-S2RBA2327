#include <stdio.h>

// Function prototype
void swap(int *a, int *b);

int main() {
    int x = 5, y = 10;
    
    printf("Before swapping: x = %d, y = %d\n", x, y);
    
    // Passing the addresses of 'x' and 'y' to the swap function
    swap(&x, &y);
    
    printf("After swapping: x = %d, y = %d\n", x, y);
    
    return 0;
}

// Function definition
void swap(int *a, int *b) {
    int temp = *a; // Store the value pointed by 'a' in a temporary variable
    *a = *b;       // Assign the value pointed by 'b' to 'a'
    *b = temp;     // Assign the value stored in the temporary variable to 'b'
}
