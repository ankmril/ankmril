#include <stdio.h>
#include <math.h>

int main() {
  int num;
  double sum = 0;

  printf("enter a number:\n");
  scanf(" %d", &num);

  int dup = num;

  while(num > 0) {
    sum = sum + pow(num % 10, 3);
    num = num / 10;
  }

  if(sum == dup)
    printf("armstrong number.\n");
  else
    printf("not an armstrong number.\n");
  
  return 0;
}