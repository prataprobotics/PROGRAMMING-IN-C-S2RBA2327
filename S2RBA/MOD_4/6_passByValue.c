#include <stdio.h>

void modifyByValue(int x) {
    // This function modifies the value of x locally
    x = x * 2;
    printf("Inside modifyByValue function: x = %d\n", x);
}

int main() {
    int a = 10;
    
    printf("Before calling modifyByValue: a = %d\n", a);
    // Call modifyByValue and pass the value of a
    modifyByValue(a);
    printf("After calling modifyByValue: a = %d\n", a);
    
    return 0;
}
