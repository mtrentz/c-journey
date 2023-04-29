#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *changeStr(char *str) {
    // This works because size of char is 1
    char *newStr = malloc(strlen(str) + 1);

    // Fill it with 'x'
    for (int i = 0; str[i] != '\0'; i++) {
        newStr[i] = 'x';
    }

    // Add the terminating null character
    newStr[strlen(str)] = '\0';

    return newStr;
}

int *changeArr(int *arr, int size) {
    // Allocate memory to new arr
    int *newArr = malloc(size * sizeof(int));

    // Make every element 100 bigger
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i] + 100;
    }

    return newArr;
}

int main() {
    char name[] = "Mateus";

    char *newName = changeStr(name);
    printf("%s\n", newName);

    char *newerName;
    newerName = changeStr(name);
    printf("%s\n", newerName);

    // Print old name
    printf("Old name: %s\n", name);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *newArr = changeArr(arr, size);

    // Print old arr
    printf("Old arr: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Print new arr
    printf("New arr: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}