#include <stdio.h>

#define NAME_LENGTH 50

// Define a union named Person
union details {
    char name[NAME_LENGTH];
    int age;
    float height;
};

int main() {
    // Create an instance of the Person union
    union details person;

    // Assign a string value to the name member
    snprintf(person.name, NAME_LENGTH, "PRATAP PILLAI");
    printf("Name: %s\n", person.name);

    // Assign an integer value to the age member
    person.age = 45;
    printf("Age: %d\n", person.age);

    // Assign a float value to the height member
    person.height = 6.1;  // Height in feet
    printf("Height: %.1f feet\n", person.height);

    return 0;
}
