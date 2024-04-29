#include <stdio.h>

int main() {
    int i;

    printf("Example of continue statement:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", i);
    }
  //  printf("\n");

    return 0;
}
