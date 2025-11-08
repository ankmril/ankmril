#include <stdio.h>

int main() {
  int a, b;
  int add, sub, mul, div, mod;

  printf("enter two numbers:\n");
  scanf("%d%d", &a, &b);

  add = a + b;
  sub = a - b;
  mul = a * b;
  div = a / b;
  mod = a % b;

  printf("addition: %d\nsubtraction: %d\nmultiplication: %d\ndivision: %d\nmodulus division: %d\n", add, sub, mul, div, mod);
  
  return 0;
}