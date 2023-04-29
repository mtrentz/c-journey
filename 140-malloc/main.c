#include <stdio.h>
#include <stdlib.h>

int main() {
    int *i = malloc(sizeof(int));
    *i = 99;
    printf("%p\n", i);
    printf("%d\n", *i);

    printf("----\n");

    int arrSize = 5;
    int *arr = malloc(arrSize * sizeof(int));
    arr[0] = 10;
    arr[1] = 20;
    // arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    // The one at 2 can be gibberish since It could be used before
    printf("Array values are: %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2],
           arr[3], arr[4]);

    printf("----\n");

    // To create one that is not gibberish we can use calloc
    // which will initialize the values.
    int *arr2 = calloc(arrSize, sizeof(int));
    arr2[0] = 10;
    arr2[4] = 50;
    printf("Array values are: %d, %d, %d, %d, %d\n", arr2[0], arr2[1], arr2[2],
           arr2[3], arr2[4]);

    return 0;
}