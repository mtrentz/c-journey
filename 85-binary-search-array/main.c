#include <stdio.h>

int binarySearch(int arr[], int size, int v, int lo, int hi) {
    int mi = lo + ((hi - lo) / 2);

    // Found
    if (arr[mi] == v) {
        return 1;
    }

    // Not found
    if (lo >= hi) {
        return 0;
    }

    if (v > arr[mi]) {
        return binarySearch(arr, size, v, mi + 1, hi);
    } else {
        return binarySearch(arr, size, v, lo, mi - 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int res = binarySearch(arr, size, 5, 0, size - 1);
    printf("%d", res);
    return 0;
}
