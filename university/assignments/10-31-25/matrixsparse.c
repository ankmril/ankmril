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

  int cz = 0, cn = 0; // to count zero and non zero elements

  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
      if(arr[i][j] == 0)
        cz++;
      else
        cn++;
    }
  }

  // more zero elements than non zero elements means sparse matrix

  if(cz > cn) 
    printf("sparse matrix.\n");
  else if(cz == cn)
    printf("same number of zero elements and non zero elements.\n");
  else
    printf("not a sparse matrix.\n");

  return 0;
}