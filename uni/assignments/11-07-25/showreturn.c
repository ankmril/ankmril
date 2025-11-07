#include <stdio.h>

int first(int x, int y) {
  int sum = x + y;
  return sum;
}

int second(int x, int y) {
  int div1 = x / y;
  int div2 = x % y;

  return div1; // only this value will be returned.
  return div2; // this doesn't generate an error but it simply doesn't get executed since the program quits at previous return.
}

int main() {
  int a, b;

  printf("\nEnter two numbers:\n");
  scanf(" %d %d", &a, &b);

  int sum = first(a, b);

  int div = second(a, b);

  printf("\nResult:\n");
  printf("Sum: %d\n", sum);
  printf("Division: %d\n", div);

  return 0;
}