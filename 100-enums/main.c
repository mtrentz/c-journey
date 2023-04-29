#include <stdio.h>

enum countries { BR = 1, US = 2, JP = 3 };

int main() {
    // Define a country
    enum countries c = BR;

    switch (c) {
        case BR:
            printf("Brazil\n");
            break;
        case US:
            printf("United States\n");
            break;
        case JP:
            printf("Japan\n");
            break;
        default:
            printf("Unknown country\n");
    }
    return 0;
}
