#include <stdio.h>

void main() {
    int count;
    for (count = 0; count < 10; ++count) {
        printf("#");
        if (count > 6) {
            continue;
        }
        printf("%d", count);
    }
}
