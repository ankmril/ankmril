#include <stdio.h>

int main() {
  int r, c, i, j;

  printf("enter the size of matrix:\n");
  scanf(" %d%d", &r, &c);

  int arr[r][c];

  int arrtp[c][r];

  printf("enter the elements of matrix:\n");

  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
      scanf(" %d", &arr[i][j]);
    }
  }

  // rows and colums interchanged = transpose of a matrix

  for(i = 0; i < c; i++) {
    for(j = 0; j < r; j++) {
      arrtp[i][j] = arr[j][i];
    }
  }

  printf("the resultant matrix:\n");

  for(i = 0; i < c; i++) {
    for(j = 0; j < r; j++) {
      printf("%d ", arrtp[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}