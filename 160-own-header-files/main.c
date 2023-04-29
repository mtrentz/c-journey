#include <stdio.h>

#include "funcs/funcs.h"

// compile with ➜ gcc -o main main.c funcs/funcs.c

int main() {
    int n = 42;
    int dobro = dobraNumero(n);
    printf("O dobro de %d eh %d\n", n, dobro);

    mandaSalve();

    return 0;
}