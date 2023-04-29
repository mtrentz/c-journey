#include <stdio.h>
#include <string.h>

int main() {
    struct Student {
        int id;
        char name[50];
        int age;
    };

    struct Student s1;

    s1.id = 10;
    strcpy(s1.name, "Mateus");

    printf("Id: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    // This will print a random value, since we didn't set it
    printf("Age: %d\n", s1.age);

    printf("\n");

    // Create and define a struct
    struct Student s2 = {20, "João", 20};

    printf("Id: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);

    return 0;
}