#include <stdio.h>

int main() {
  int n;

  printf("enter the size of array:\n");
  scanf(" %d", &n);

  int arr[n]; 

  printf("enter the elements of array:\n");

  for(int i = 0; i < n; i++)
    scanf(" %d", &arr[i]);
  
  int ecount = 0, ocount = 0;

  for(int i = 0; i < n; i++) {
    if(arr[i] % 2 == 0)
      ecount++;
    else
      ocount++;
  }

  printf("number of even numbers: %d\nnumber of odd numbers: %d\n", ecount, ocount);

  return 0;
}