#include <stdio.h>

int main() {
  int n;

  printf("enter number of elements:\n");
  scanf(" %d", &n);

  int arr[n];

  printf("enter the elements:\n");

  for(int i = 0; i < n; i++)
    scanf(" %d", &arr[i]);

  printf("elements:\n");

  for(int j = 0; j < n; j++)
    printf("%d\n", arr[j]);
  
  return 0;
}