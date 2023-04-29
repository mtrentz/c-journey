#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
} Student;

void printStudent(Student student) {
    printf("Student id: %d\n", student.id);
    printf("Student name: %s\n", student.name);
    printf("Student age: %d\n", student.age);
}

int main() {
    Student s1 = {1, "John", 20};
    Student s2;
    s2.id = 2;
    strcpy(s2.name, "Mary");
    s2.age = 21;

    printStudent(s1);
    printf("\n");
    printStudent(s2);

    return 0;
}