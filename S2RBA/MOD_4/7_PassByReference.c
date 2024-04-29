#include <stdio.h>

void modifyByReference(int *x) {
    // This function modifies the value of the variable that x points to
    *x = *x * 2;
    printf("Inside modifyByReference function: *x = %d\n", *x);
}

int main() {
    int a = 10;
    
    printf("Before calling modifyByReference: a = %d\n", a);
    // Call modifyByReference and pass the address of a
    modifyByReference(&a);
    printf("After calling modifyByReference: a = %d\n", a);
    
    return 0;
}

