#include <stdio.h>

int main() {
    for (int i = 0; i <= 10; i++) {
        if (i > 5 && i < 8) {
            printf("between five and eight!\n");
            continue;
        }

        if (i == 3 || i == 9) {
            printf("Either three or nine!\n");
            continue;
        }

        printf("%d\n", i);
    }
}