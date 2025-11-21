#include <stdio.h>

int main() {
  int n, i, j;
  
  printf("\nEnter the size of array:\n");
  scanf(" %d", &n);

  int arr[n];

  printf("\nEnter the elements of array:\n");

  for(i = 0; i < n; i++) {
    scanf(" %d", &arr[i]);
  }

  int *ptr = arr;

  for(i = 0; i < n - 1; i++) {
    for(j = i + 1; j < n; j++) {
      if(*(ptr + j) < *(ptr + i)) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
      }
    }
  }

  printf("\nSorted array:\n");

  for(i = 0; i < n; i++) {
    printf("%d\n", *(ptr + i));
  }

  return 0;
}