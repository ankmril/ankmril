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

  // if diagonals not equal to 1 or non diagonals not equal to 0 then program ends.

  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
      if(i != j && arr[i][j] != 0) {
        printf("not an identity matrix.\n");
        return 0;
      }
      if(i == j && arr[i][j] != 1) {
        printf("not an identity matrix.\n");
        return 0;
      }
    }
  }

  printf("identity matrix.\n");
  
  return 0;
}