#include <stdio.h>

int main() {
  int n;

  printf("enter the size of array:\n");
  scanf(" %d", &n);

  int arr[n];
  
  printf("enter the elements:\n");

  for(int i = 0; i < n; i++)
    scanf(" %d", &arr[i]);

  int l1 = arr[0], l2 = -1;
  int temp;

  for(int j = 1; j < n; j++) {
    if(arr[j] > l1) {
      l2 = l1;
      l1 = arr[j];
    }
    else if(arr[j] > l2 && arr[j] != l1) {
      l2 = arr[j];
    }
  }

  printf("largest: %d\n2nd largest: %d\n", l1, l2);
  
  return 0;
}