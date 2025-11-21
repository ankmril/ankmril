#include <stdio.h>

int main() {
  int n, i;

  printf("\nEnter the size of array:\n");
  scanf(" %d", &n);

  int arr[n];

  printf("\nEnter the elements of array:\n");

  for(i = 0; i < n; i++) {
    scanf(" %d", &arr[i]);
  }

  int *ptr = arr; // pointer variable

  for(i = 0; i < n; i++) {
    printf("\nElement: %d\nAddress: %p\n", *(ptr + i), (ptr + i));
  }

  return 0;
}