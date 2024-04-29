#include <stdio.h>

int main() {
    printf("Using 'break' statement:\n");
    for (int i = 1; i <= 10; i++) {
        printf("i = %d\n", i);
        if (i == 5) {
            printf("Breaking out of the loop at i = 5\n");
            break; // Exit the loop when i is 5
        }
    }

    printf("\nUsing 'continue' statement:\n");
    for (int j = 1; j <= 10; j++) {
        if (j == 5) {
            printf("Skipping iteration at j = 5\n");
            continue; // Skip the iteration when j is 5
        }
        printf("j = %d\n", j);
    }

    return 0;
}
