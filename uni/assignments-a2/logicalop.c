#include <stdio.h>

int main() {
  int a, b;

  printf("enter two numbers:\n");
  scanf("%d%d", &a, &b);

  if(a % 2 == 0 && b % 2 == 0)
  printf("both a and b are divisible by 2.\n");

  if(a % 2 == 0 || b % 2 == 0)
  printf("either a or b is divisible by 2.\n");

  if(!a % 2 == 0)
  printf("a is not divisible by 2.\n");

  return 0;
}