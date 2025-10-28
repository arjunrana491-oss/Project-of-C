#include <stdio.h>
#include "arraylib.h"

// #Cp — Implementation of 1D array helper functions

int findMaxIndex(int arr[], int size) {
    if (size <= 0) return -1;
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    return maxIndex;
}

int findMinIndex(int arr[], int size) {
    if (size <= 0) return -1;
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }
    return minIndex;
}

float findAverage(int arr[], int size) {
    if (size <= 0) return 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (float)sum / size;
}

void displayArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}
Void CopyArray(int a[], int b[], int size) {
    for(int i=0;i<size;i++){
        b[i[= a[i];
}
}

