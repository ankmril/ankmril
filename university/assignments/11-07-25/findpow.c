#include <stdio.h>

int power(int n, int a) {
  if(n == 1)
    return 1;

  if(n % a != 0) 
    return 0;

  return power(n / a, a);
}

int main() {
  int n;

  printf("\nEnter the number to check:\n");
  scanf(" %d", &n);

  for(int a = 2; a <= n; a++) {
    if(power(n, a)) {
      int exp = 0, temp = n;

      while(temp > 1) {
        temp /= a;
        exp++;
      }

      printf("\nResult: %d is %d^%d\n", n, a, exp);
      break;
    }
  }

  return 0;
}