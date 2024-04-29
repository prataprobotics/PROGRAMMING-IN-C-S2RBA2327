//ARRAY NUMBERS ADDITION AND AVERAGE

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

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    // Calculate the average of the elements
    float average = (float)sum / size;

    // Display the sum and average
    printf("Sum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}
