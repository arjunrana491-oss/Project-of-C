#include <stdio.h>
#include "arraylib.h"

// #Cp — Sample usage of array helper library

int main(void) {
    int a[] = {3, 1, 4, 1, 5};
    int n = 5;

    displayArray(a, n);
    printf("Max at index %d\n", findMaxIndex(a, n));
    reverseArray(a, n);
    displayArray(a, n);

    printf("Min at index %d\n", findMinIndex(a, n));
    printf("Average = %.2f\n", findAverage(a, n));

    sortArray(a, n);
    printf("Sorted array: ");
    displayArray(a, n);

    int value = 4;
    int pos = linearSearch(a, n, value);
    if (pos != -1)
        printf("Value %d found at index %d\n", value, pos);
    else
        printf("Value %d not found\n", value);

    return 0;
}
