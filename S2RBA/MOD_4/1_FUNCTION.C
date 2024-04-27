#include <stdio.h>

// Function declaration
int add(int num1, int num2);

int main() {
    int num1, num2, sum;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the add function to add the numbers
    sum = add(num1, num2);

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

// Function definition
int add(int num1, int num2) {
    return num1 + num2;
}