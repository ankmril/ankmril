#include <stdio.h>
#include <stdlib.h>

int main() { 
  int *arr;
  int i, n = 5, newSize = 10;

  arr = (int*)malloc(n * sizeof(int));

  if(arr == NULL) {
    printf("Initial memory allocation failed\n");
    return 1;
  }

  printf("Enter %d integers:\n", n);
  
  for(int i = 0; i < n; i++) {
    scanf(" %d", &arr[i]);
  }

  arr = (int*)realloc(arr, newSize * sizeof(int));

  if(arr == NULL) {
    printf("Memory reallocation failed\n");
    return 1;
  }

  printf("\nEnter %d more integers:\n", newSize - n);

  for(int i = n; i < newSize; i++) { 
    scanf(" %d", &arr[i]);
  }

  printf("\nArray after resizing:\n");

  for(i = 0; i < newSize; i++) {
    printf("%d\n", arr[i]);
  }
  printf("\n");

  free(arr);

  return 0;
}