#include <stdio.h>

int main() {
  int a, b;
  
  printf("\nEnter two numbers:\n");
  scanf(" %d %d", &a, &b);

  int lcm = 1;
  int gcd = 1;

  for(int i = 2; i <= a; i++) {
    if(a % i == 0 && b % i == 0) { // LCM logic
      lcm = i;
      break;
    }
  }

  for(int j = 2; j <= a; j++) {
    if(a % j == 0 && b % j == 0) { // GCD logic
      gcd = j;
    }
  }

  printf("\nResult:\nLCM: %d\nGCD: %d\n", lcm, gcd);

  return 0;
}