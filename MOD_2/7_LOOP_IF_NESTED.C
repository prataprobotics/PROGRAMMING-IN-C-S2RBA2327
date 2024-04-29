#include <stdio.h>

int main() {
    int num;

    printf("ENTER The number \n");

    scanf ("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");

        if (num % 2 == 0) {
            printf("And it is also even.\n");
        } else {
            printf("But it is odd.\n");
        }
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
