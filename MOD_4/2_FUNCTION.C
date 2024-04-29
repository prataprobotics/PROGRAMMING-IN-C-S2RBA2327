#include <stdio.h>

// Function declarations
int add(int num1, int num2);
int multiply(int num1, int num2);

int main() {
    int num1, num2, sum, product;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the add function to add the numbers
    sum = add(num1, num2);

    // Call the multiply function to multiply the numbers
    product = multiply(num1, num2);

    // Display the results
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("The product of %d and %d is %d\n", num1, num2, product);

    return 0;
}

// Function definition for addition
int add(int num1, int num2) {
    return num1 + num2;
}

// Function definition for multiplication
int multiply(int num1, int num2) {
    return num1 * num2;
}
