#include <stdio.h>

int main() {
  int a, b;

  printf("enter two numbers:\n");
  scanf(" %d %d", &a, &b);

  printf("AND: %d\nOR: %d\nXOR: %d\nNOT: %d\nLEFT SHIFT: %d\nRIGHT SHIFT: %d\n", a & b, a | b, a ^ b, ~a, a << 1, a >> 1);
  return 0;
}