// array_utils.c
#include <stdio.h>
#include "array_utils.h"

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void rotate_left(int* arr, int n, int k)
{
    k = k % n;
    while (k--) {
        int first = arr[0];
        for (int i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
        arr[n - 1] = first;
    }
}
