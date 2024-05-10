#include <stdio.h>

int main() {
    // Declare an integer variable and assign a value to it
    int num = 42;

    // Declare a pointer to an integer
    int *ptr;

    // Assign the address of the integer variable to the pointer
    ptr = &num;

    // Display the value of the integer variable
    printf("Value of num: %d\n", num);

    // Display the address of the integer variable
    printf("Address of num: %d\n", &num);

    // Display the value of the pointer (the address of num)
    printf("Value of ptr (address of num): %p\n",ptr);

    // Display the value pointed to by the pointer
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Modify the value of num through the pointer
    *ptr = 100;

    // Display the modified value of num
    printf("Modified value of num: %d\n", num);

    return 0;
}
