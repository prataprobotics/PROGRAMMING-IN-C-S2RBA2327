#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int array[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing and printing elements of the 2D array
    printf("2D Array Elements:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
