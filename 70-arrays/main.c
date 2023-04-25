#include <stdio.h>
#include <string.h>

int main() {
    int myArr[10] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Loop through array
    // Have to get size using sizeof array (bytes) and divide by size of
    // elements. Also, shows 0 for empty elements.
    for (int i = 0; i < sizeof(myArr) / sizeof(myArr[0]); i++) {
        printf("%d\n", myArr[i]);
    }

    // Charr array
    char myStrArr[8][10] = {"My", "name", "is", "John", "Doe"};

    // Loop through array
    for (int i = 0; i < sizeof(myStrArr) / sizeof(myStrArr[0]); i++) {
        printf(">%s\n", myStrArr[i]);
    }

    return 0;
}