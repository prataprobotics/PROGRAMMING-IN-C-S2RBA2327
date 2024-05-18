#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to clear the input buffer
void clear_input_buffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main() {
    FILE *f1;
    char str[30], ch;
    
    f1 = fopen("INPUT.txt", "a");
    if (f1 == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    
    printf("Enter the string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove newline character from fgets input if present
        size_t len = strlen(str);
        if (len > 0 && str[len-1] == '\n') {
            str[len-1] = '\0';
        }
        fprintf(f1, "%s", str);
        printf("APPENDED\n");
    } else {
        clear_input_buffer();
        printf("Error reading input\n");
        fclose(f1);
        return EXIT_FAILURE;
    }
    fclose(f1);

    f1 = fopen("INPUT.txt", "r");
    if (f1 == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(f1)) != EOF) {
        printf("%c", ch);
    }
    fclose(f1);

    return EXIT_SUCCESS;
}
