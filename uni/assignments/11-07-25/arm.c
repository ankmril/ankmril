#include <stdio.h>
#include <math.h>

int main() {
  int num = 0, sum = 0, dig = 0;

  printf("\nEnter a number:\n");
  scanf(" %d", &num);

  int dup = num; // to check later in condition

  while(num > 0) {
    dig = num % 10;
    sum += pow(dig, 3); // digit cube sum equals original for armstrong number
    num = num / 10;
  }

  if(dup == sum) {
    printf("\nArmstrong number.\n");
  }
  else {
    printf("\nNot an Armstrong number.\n");
  }

  return 0;
}