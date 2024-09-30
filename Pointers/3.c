//Write a C program to swap two numbers using pointers.



#include <stdio.h>

void swap_numbers(int *ptr1, int *ptr2) {
  int temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

void main() {
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  swap_numbers(&num1, &num2);

  printf("The swapped numbers are: %d %d", num1, num2);
}
