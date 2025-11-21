#include <stdio.h>

int* max(int *a, int *b) { 
  if(*a > *b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int x, y;

  printf("\nEnter two numbers:\n");
  scanf(" %d %d", &x, &y);

  int *m = max(&x, &y);

  printf("\nMax val: %d\n", *m);
  printf("Address: %p\n", m);

  return 0;
}