#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    // This wont work if it has whitespaces
    // scanf("%s", name);
    // This will work
    fgets(name, 20, stdin);

    printf("Hello %s\n", name);

    return 0;
}