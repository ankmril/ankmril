#include <stdio.h>

int main() {
  int *iptr;
  float *fptr;
  double *dptr;
  char *cptr;
  long *lptr;

  printf("\nSize of diff types of ptr var:\n");

  printf("\nint: %lu bytes\n", sizeof(*iptr));
  printf("float: %lu bytes\n", sizeof(*fptr));
  printf("double: %lu bytes\n", sizeof(*dptr));
  printf("char: %lu bytes\n", sizeof(*cptr));
  printf("long: %lu bytes\n", sizeof(*lptr));

  return 0;
}