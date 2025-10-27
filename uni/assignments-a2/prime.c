#include <stdio.h>

int main() {
  int n;

  printf("enter n:\n");
  scanf("%d", &n);

  printf("prime numbers:\n");

  for(int i = 1; i <= n; i++) {
    int f = 0;
    for(int j = 1; j <= i; j++) {
      if(i % j == 0)
        f++;
    }
    if(f == 2)
      printf("%d\n", i);
  }

  return 0;
}