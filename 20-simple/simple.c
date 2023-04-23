#include <stdio.h>

int main() {
    int um = 1;
    int dois = 2;
    char name[10] = "John";

    char newName[] = "Mateus";
    // Cant do this
    // newName = "Mateus";
    // CAN do this
    newName[0] = 'Y';
    // Print only name without anything else
    printf("%s", newName);

    printf("\n");

    printf("1 + 2 = %d", um + dois);
    printf("\n");
    printf("My name is %s", name);
    printf("\n");

    um = 10;
    printf("Um is now %d", um);

    printf("\n");
    int new = 7;
    new ++;
    new += 1;
    new --;
    printf("%d", new);

    printf("\n");
    return 0;
}
