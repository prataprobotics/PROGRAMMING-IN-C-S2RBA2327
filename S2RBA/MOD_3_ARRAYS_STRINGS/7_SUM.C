#include <stdio.h>

#define SIZE 5 // Define the size of the array

int main() {
    int array[SIZE] = {5, 10, 15, 20, 25};
    int sum = 0;
    float average;

    // Calculating the sum of elements in the array
    for (int i = 0; i < SIZE; i++) {
        sum += array[i];
    }

    // Calculating the average of elements in the array
    average = (float)sum / SIZE;

    printf("Array elements:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\nSum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
