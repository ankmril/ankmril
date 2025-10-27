#include <stdio.h>

int main() {
  int yr;

  printf("enter year:\n");
  scanf("%d", &yr);

  if(yr % 4 == 0)
    printf("leap year.\n");
  else
    printf("not a leap year.\n");

  return 0;
}