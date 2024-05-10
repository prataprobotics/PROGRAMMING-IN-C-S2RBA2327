#include <stdio.h>

int main() {
    // Declare two integers and a result integer
    int num1 = 5;  // Hardcode the first integer value
    int num2 = 3;  // Hardcode the second integer value
    int result;
    
    // Declare pointers for num1, num2, and result
    int *ptr1 = &num1;  // Pointer pointing to num1
    int *ptr2 = &num2;  // Pointer pointing to num2
    int *ptrResult = &result;  // Pointer pointing to result
    
    // Perform addition using pointers
    *ptrResult = *ptr1 + *ptr2;
    
    // Display the result
    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, *ptrResult);
    printf("The sum of two number is: %d\n", result);
    
    return 0;
}
