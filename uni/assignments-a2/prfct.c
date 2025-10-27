#include <stdio.h>

int main() {
  int num, fact = 0;

  printf("enter a number:\n");
  scanf(" %d", &num);

  for(int i = 1; i < num; i++) {
    if(num % i == 0)
      fact += i;
  }

  if(fact == num) 
    printf("perfect number.\n");
  else
    printf("not a perfect number.\n");

  return 0;
}