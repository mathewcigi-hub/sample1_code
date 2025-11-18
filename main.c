// main.c
#include <stdio.h>
#include "main.h"
#include "math_utils.h"
#include "array_utils.h"

void run_demo() {
    printf("Add: %d\n", add(10, 5));
    printf("Sub: %d\n\n", sub(10, 5));

    int arr[5] = {1, 2, 3, 4, 5};
    printf("Original array: ");
    print_array(arr, 5);

    rotate_left(arr, 5, 2);
    printf("After rotate left by 2: ");
    print_array(arr, 5);
}

int main() {
    run_demo();
    return 0;
}
