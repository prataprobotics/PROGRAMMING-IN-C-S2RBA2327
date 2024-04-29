
#include <stdio.h>

int printSum(int a, int b) {
    // Calculate the sum of a and b and return the result
    return (a + b);
}

int main() {
    int num1 = 5, num2 = 10, sum;
    
    // Call the printSum function and store the result in sum
    sum = printSum(num1, num2);
    
    // Print the result
    printf("Sum: %d\n", sum);
    
    return 0;
}
