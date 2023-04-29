#include <stdio.h>

void doubleNumber(int *n) { *n = *n * 2; }

int main() {
    int n = 42;
    int *pN = &n;

    doubleNumber(pN);

    printf("%d\n", n);

    return 0;
}
