//.Write a C program to reverse an array using pointers.

#include <stdio.h>
#define SIZE 10
int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *startPtr = arr;
    int *endPtr = arr + SIZE - 1;

    // Reverse the array using pointers
    while (startPtr < endPtr) {
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;
        startPtr++;
        endPtr--;
    }

    // Display the reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
