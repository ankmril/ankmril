#include <stdio.h>

int main() {
  int num, f=1;

  printf("enter number:\n");
  scanf("%d", &num);

  int i = 1;
  
  while(i <= num) {
    f = f * i;
    i++;
  }

  printf("factorial: %d\n", f);

  return 0;
}