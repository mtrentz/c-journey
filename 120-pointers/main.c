#include <stdio.h>

int main() {
    int n = 42;
    int *pN = &n;

    // Is good pratice to do this if not defining at once
    int *pN2 = NULL;
    pN2 = &n;

    printf("Value of n: %d\n", n);
    printf("Address of n: %p\n", &n);
    printf("Address of n: %p\n", pN);

    printf("\n");

    // Gettign the value from the address
    printf("Value of n: %d\n", *pN);

    return 0;
}
