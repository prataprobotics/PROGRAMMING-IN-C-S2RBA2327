#include <stdio.h>

unsigned long long factorial(int num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number=5;
    float y;
    
    y=(factorial(number)-factorial(number-2))/2 ;
    //y=factorial(number);
    printf("finding the value of the function : %.2f", y);
    return 0;
}
