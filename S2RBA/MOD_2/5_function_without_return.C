

#include <stdio.h>

void printSum(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

int main() {
    int num1 = 5, num2= 10;
    printSum(num1,num2);
    return 0;
}
