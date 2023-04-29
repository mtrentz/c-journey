#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    return (fibonacci(n - 2) + fibonacci(n - 1));
}

int main() {
    int res;

    for (int i = 1; i <= 20; i++) {
        res = fibonacci(i);
        printf("%d\n", res);
    }

    return 0;
}
