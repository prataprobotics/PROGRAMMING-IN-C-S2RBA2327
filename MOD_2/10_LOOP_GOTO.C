#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        goto even;
    } else {
        goto odd;
    }

even:
    printf("%d is an even number.\n", num);
    goto end;

odd:
    printf("%d is an odd number.\n", num);

end:
    return 0;
}
