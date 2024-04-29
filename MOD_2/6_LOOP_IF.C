#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    }
    // Check if the number is negative
    else if (num < 0) {
        printf("%d is a negative number.\n", num);
    }
    // If the number is neither positive nor negative, it must be zero
    else {
        printf("You entered zero.\n");
    }

    return 0;
}
