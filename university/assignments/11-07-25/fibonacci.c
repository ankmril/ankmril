#include <stdio.h>

int fibonacci(int n) {
  if(n == 0) 
    return 0;
  
  if(n == 1)
    return 1;

  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  int n;

  printf("\nEnter the value of n:\n");
  scanf(" %d", &n);

  printf("\nThe Fibonacci Series:\n");

  for(int i = 0; i < n; i++) {
    printf("%d\n", fibonacci(i));
  }

  return 0;
}