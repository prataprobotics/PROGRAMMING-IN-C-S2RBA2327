#include <stdio.h>

int main() {
    char name[50]; // Declare a character array to store the name
    char college [] = "saintgits college of engineering";
    // Prompt the user to enter their name
    printf("Enter your name: ");
    
    // Read the name from the standard input (keyboard)
    scanf("%s", name);

    // Display a greeting with the entered name
    printf("Hello, %s!\n", name);
    printf("your college name is , %s!\n", college);

    return 0;
}
