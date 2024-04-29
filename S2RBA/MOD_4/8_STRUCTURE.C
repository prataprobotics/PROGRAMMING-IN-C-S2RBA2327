#include <stdio.h>

#define NAME_LENGTH 50

// Define a structure named Person
struct details {
    char name[NAME_LENGTH];
    int age;
    float height;
};

int main() {
    // Create an instance of the Person structure
    struct details person;

    // Assign values to the structure members
    snprintf(person.name, NAME_LENGTH, "pratap");
    person.age = 30;
    person.height = 5.9;  // Height in feet

    // Print the structure members
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.1f feet\n", person.height);

    return 0;
}
