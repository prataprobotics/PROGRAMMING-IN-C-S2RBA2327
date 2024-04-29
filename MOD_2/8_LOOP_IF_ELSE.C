#include <stdio.h>

int main() {
    char direction;

    printf("Enter a direction (S for straight, R for reverse, L for left, or R for right): ");
    scanf(" %c", &direction);

    if (direction == 'S') {
        printf("Go straight.\n");
    } 
    else if (direction == 'R') {
        printf("Go reverse.\n");
    } 
    else if (direction == 'L') {
        printf("Go left.\n");
    } 
    else if (direction == 'R') {
        printf("Go right.\n");
    } 
    else {
        printf("Invalid direction entered.\n");
    }

    return 0;
}
