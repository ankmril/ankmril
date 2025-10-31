#include <stdio.h>

int main() {
  int r1, c1, r2, c2, i, j;

  printf("enter the order of 1st matrix:\n");
  scanf(" %d%d", &r1, &c1);

  printf("enter the order of 2nd matrix:\n");
  scanf(" %d%d", &r2, &c2);

  if(r1 != r2 || c1 != c2) {
    printf("matrix addition condition is not satisfied.\n");
    return 0;
  }

  int arr1[r1][c1], arr2[r2][c2], arr3[r1][c2];

  printf("enter the elements of 1st matrix:\n");

  for(i = 0; i < r1; i++) {
    for(j = 0; j < c1; j++) {
      scanf(" %d", &arr1[i][j]);
    }
  }

  printf("enter the elements of 2nd matrix:\n");

  for(i = 0; i < r2; i++) {
    for(j = 0; j < c2; j++) {
      scanf(" %d", &arr2[i][j]);
    }
  }

  for(i = 0; i < r1; i++) {
    for(j = 0; j < c2; j++) {
      arr3[i][j] = arr1[i][j] + arr2[i][j];
    }
  }

  printf("the resultant matrix:\n");

  for(i = 0; i < r1; i++) {
    for(j = 0; j < c2; j++) {
      printf("%d ", arr3[i][j]);
    }
    printf("\n");
  }

  return 0;
}