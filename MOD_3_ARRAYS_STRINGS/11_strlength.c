#include <stdio.h>
#include <string.h>

int main() {
    char name1[] = "Hello, world!"; // Declare and initialize a string
    char name2[] = "pratap";
    char name3[] = {'p','r','a','t','\0','p'};
    char name4[] = "Hello, world!";
    // Get the length of the string
    
    // Display the length of the string
    printf("Length of the string: %ld\n", strlen(name1));
    printf("Length of the string: %ld\n", strlen(name2));
    printf("Length of the string: %ld\n", strlen(name3));
    printf("Length of the string: %ld\n", strlen(name4));
    
    return 0;
}
