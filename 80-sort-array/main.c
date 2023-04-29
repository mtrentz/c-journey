#include <stdio.h>

// Apparently I could receive int arr[] here
// and by default a pointer to the array
// would get passed.
void bubbleSort(int *arr, int size) {
    int tmp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    int lo = 0;
    int minIdx;
    int tmp;

    // Go from lo=0 to lo=size-1
    for (lo = 0; lo < size - 1; lo++) {
        minIdx = lo;
        // Go over the array from lowest to highest bound
        for (int i = lo; i < size; i++) {
            // If any value is lower than the value stored at
            // minIdx, store the new lowest instead.
            if (arr[i] < arr[minIdx]) {
                minIdx = i;
            }
        }
        // Now we have the lowest value, lets
        // switch it with the first element of the bound.
        tmp = arr[lo];
        arr[lo] = arr[minIdx];
        arr[minIdx] = tmp;
    }
}

int main() {
    int myArr[8] = {1, 7, 3, 4, 5, 6, 2, 8};

    bubbleSort(myArr, sizeof(myArr) / sizeof(int));

    printf("Bubble sort from first arr:\n");
    for (int i = 0; i < sizeof(myArr) / sizeof(int); i++) {
        printf("%d\n", myArr[i]);
    }

    int secondArr[10] = {7, 1, 3, 4, 5, 6, 2, 8, 9, 10};

    selectionSort(secondArr, sizeof(secondArr) / sizeof(int));

    printf("\nBubble sort from second arr arr:\n");
    for (int i = 0; i < sizeof(secondArr) / sizeof(int); i++) {
        printf("%d\n", secondArr[i]);
    }

    // int thirdArr[4] = {6, 4, 3, 8};
    int thirdArr[7] = {6, 4, 9, 3, 1, 8, 7};

    // bringToFront(thirdArr, sizeof(thirdArr) / sizeof(int), 5);
    quickSort(thirdArr, sizeof(thirdArr) / sizeof(int), 0);

    printf("\nQuicksort third arr\n");
    for (int i = 0; i < sizeof(thirdArr) / sizeof(int); i++) {
        printf("%d\n", thirdArr[i]);
    }

    return 1;
}