#include <stdio.h>

int main() {
    int number;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Using conditional operator to check if the number is even or odd
    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);

    return 0;
}
