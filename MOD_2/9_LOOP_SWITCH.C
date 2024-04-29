#include <stdio.h>

int main() {
    char choice;

    printf("Enter a choice (A, B, C, D): ");
    scanf(" %c", &choice);

    switch(choice) {
        case 'A':
            printf("You chose option A.\n");
            break;
        case 'B':
            printf("You chose option B.\n");
            break;
        case 'C':
            printf("You chose option C.\n");
            break;
        case 'D':
            printf("You chose option D.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
