#include <stdio.h>

int main() {
  int r1, c1, r2, c2, i, j, k;

  printf("enter the size of 1st matrix:\n");
  scanf(" %d%d", &r1, &c1);

  printf("enter the size of 2nd array:\n");
  scanf(" %d%d", &r2, &c2);

  if(c1 != r2) {
    printf("matrix multiplication condition is not satisfied.\n");
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

  // multiplication of matrices

  for(i = 0; i < r1; i++) {
    for(j = 0; j < c1; j++) {
      for(k = 0; k < c2; k++) {
        arr3[i][j] = arr1[i][k] * arr2[k][j];
      }
    }
  }

  printf("resultant matrix:\n");

  for(i = 0; i < r1; i++) {
    for(j = 0; j < c1; j++) {
      printf("%d ", arr3[i][j]);
    }
    printf("\n");
  }

  return 0;
}