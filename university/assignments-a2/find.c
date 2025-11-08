#include <stdio.h>

int main() {
  int n;

  printf("enter the size of array:\n");
  scanf(" %d", &n);

  int arr[n];

  printf("enter the elements of array:\n");

  for(int i = 0; i< n; i++)
    scanf(" %d", &arr[i]);

  int search;

  printf("enter the element to be searched in the array:\n");
  scanf(" %d", &search);

  int found = 0;

  for(int j = 0; j < n; j++) {
    if(arr[j] == search) {
      found++;
      printf("element found.\nposition: %d\nelement: %d\n", (j + 1), arr[j]);
      break;
    }
  }

  if(found == 0)
    printf("element not found.\n");
  
  return 0;
}