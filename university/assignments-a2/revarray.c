#include <stdio.h>

int main() {
  int n;

  printf("enter the size of array:\n");
  scanf(" %d", &n);

  int arr[n];

  printf("enter the elements of array:\n");

  for(int i = 0; i < n; i++)
    scanf(" %d", &arr[i]);

  int arr2[n];

  for(int i = 0; i < n; i++) {
    arr2[n-i-1] = arr[i];
  }

  printf("reversed array:\n");

  for(int i = 0; i < n; i++)
    printf("%d ",arr2[i]);

  printf("\n");

  return 0;
}