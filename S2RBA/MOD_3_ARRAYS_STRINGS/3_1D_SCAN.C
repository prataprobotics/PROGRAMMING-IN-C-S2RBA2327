//SCAN INPUT FROM KEYBOARD AND DISPLAY

#include <stdio.h>

int main() {
    int size;
    
    // Ask the user to input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of integers with the given size
    int numbers[size];

    // Read integers into the array from the console
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the elements of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
