//Write a C program to swap two arrays using pointers.


#include <stdio.h>
#define MAX_SIZE 100
int main() 
{
    int sourceArray[MAX_SIZE];
    int destinationArray[MAX_SIZE];
    int *srcPtr = sourceArray;
    int *destPtr = destinationArray;
    int SIZE;
    printf("Enter size of array: ");
    scanf("%d", &SIZE);
    printf("Enter source array elements -\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", (sourceArray+i));
    }
    printf("Enter destination array elements -\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", (destinationArray+i));
    }
    for (int i = 0; i < SIZE; i++) {
        int temp = *(srcPtr + i);
        *(srcPtr + i) = *(destPtr + i);
        *(destPtr + i) = temp;
    }
     printf("Swapped Source Array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", sourceArray[i]);
    }
    printf("\n");
    printf("Swapped Destination Array: ");
      for (int i = 0; i < SIZE; i++) 
      {
    printf("%d ", destinationArray[i]);
    }
    printf("\n");
    return 0;
}
