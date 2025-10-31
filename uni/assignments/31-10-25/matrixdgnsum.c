#include <stdio.h>

int main() {
  int r, c, i, j;

  printf("enter the size of matrix:\n");
  scanf(" %d%d", &r, &c);

  int arr[r][c];

  printf("enter the elements of matrix:\n");
  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
      scanf(" %d", &arr[i][j]);
    }
  }

  int sum = 0;

  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
      if(i == j)
        sum += arr[i][j];
    }
  }

  printf("sum of diagonal elements of matrix: %d\n", sum);
  
  return 0;
}