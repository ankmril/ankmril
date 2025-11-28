#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p;
  float *q;
  int i;

  p = (int*)malloc(10 * sizeof(int));
  if(p == NULL) {
    printf("Memory allocation failed for integers.\n");
    return 1;
  }

  printf("Enter 10 integers:\n");

  for(int i = 0; i < 10; i++) {
    scanf(" %d", &p[i]);
  }

  printf("\nIntegers entered:\n");

  for(int i = 0; i < 10; i++) {
    printf(" %d", p[i]);
  }
  printf("\n");

  q = (float*)calloc(10, sizeof(float));
  
  if(q == NULL) {
    printf("Memory allocation failed for floats\n");
    free(p);
    return 1;
  }

  printf("\nEnter 10 float numbers:\n");

  for(int i = 0; i < 10; i++) {
    scanf(" %f", &q[i]);
  }

  printf("\nFloats entered:\n");

  for(int i = 0; i < 10; i++) {
    printf("%.2f", q[i]);
  }
  printf("\n");

  free(p);
  free(q);

  return 0;
}