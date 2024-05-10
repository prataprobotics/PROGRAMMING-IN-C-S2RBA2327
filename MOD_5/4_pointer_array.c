#include <stdio.h>

int main() {
    // Declare an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    
    // Declare a pointer to the array
    int *ptr = arr; // This points to the first element of the array
    
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
   
    // Print the array elements using the pointer
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        // Use the pointer to access array elements
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Modify an element in the array using the pointer
    *(ptr + 2) = 100; // Change the third element (index 2) to 100

    // Print the modified array elements
    printf("Modified array elements:\n");
    for (int i = 0; i < size; i++) {
        // Use the pointer to access array elements
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
