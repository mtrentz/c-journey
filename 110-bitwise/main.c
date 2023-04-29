#include <stdio.h>

int main() {
    // AND
    int a = 7;          // 0111
    int b = 3;          // 0011
    int c = a & b;      // 0011
    printf("%d\n", c);  // 3

    printf("\n");

    // OR
    a = 7;              // 0111
    b = 3;              // 0011
    c = a | b;          // 0111
    printf("%d\n", c);  // 7

    printf("\n");
    // XOR
    a = 7;              // 0111
    b = 3;              // 0011
    c = a ^ b;          // 0100
    printf("%d\n", c);  // 4

    printf("\n");
    // SHIFT LEFT -> double
    a = 7;              // 0111
    b = a << 1;         // 1110
    c = a << 2;         // 1100
    printf("%d\n", b);  // 14
    printf("%d\n", c);  // 28

    printf("\n");
    // SHIFT RIGHT -> half
    a = 7;              // 0111
    b = a >> 1;         // 0011
    c = a >> 2;         // 0001
    printf("%d\n", b);  // 3
    printf("%d\n", c);  // 1

    printf("\n");
    // COMPLEMENT
    a = 7;              // 0111
    b = ~a;             // 1000
    printf("%d\n", b);  // -8

    printf("\n");
    // Switch sign with complement
    a = 121;  // 01111001
    b = ~a;   // 10000110
    // Add 1
    b = b + 1;          // 10000111
    printf("%d\n", b);  // -121

    printf("\n");
    // Switch sign the other way
    a = -121;  // 10000111
    b = ~a;    // 01111000
    // Add 1
    b = b + 1;          // 01111001
    printf("%d\n", b);  // 121

    return 0;
}
