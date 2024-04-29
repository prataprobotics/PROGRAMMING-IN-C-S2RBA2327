#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    printf("Enter 5 numbers:\n");

    // Taking input
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("Sorted array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
