// 1D ARRAY 
// REPLACE 30 WITH 100

#include <stdio.h>

int main() {
    // Declare an array of integers with a size of 5
    int numbers[5];

    // Initialize the array with values
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Print the values of the array
    printf("ORIGINAL VALUE of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    numbers[2]=100;
    printf("AFTER REPLACEMENT VALUE of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }


    return 0;
}
