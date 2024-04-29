#include <stdio.h>

int main() {
    int arr[] = {12, 45, 23, 67, 34, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, index = -1;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break; // Exit loop if key is found
        }
    }

    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
