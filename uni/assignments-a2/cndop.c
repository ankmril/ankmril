#include <stdio.h>

int main() {
  int a, b, c;

  printf("enter three numbers:\n");
  scanf("%d%d%d", &a, &b, &c);

  int large = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

  printf("largest number: %d\n", large);

  return 0;
}