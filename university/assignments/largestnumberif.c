#include <stdio.h>

int main() {
  int a, b, c, d = 0;

  printf("Enter three numbers:\n");
  scanf(" %d %d %d", &a, &b, &c);

  if(!(a == b && b == c && c == a)) {
    if(a > b && a > c) {
      d = a;
    }
    if(b > a && b > c) {
      d = b;
    }
    if(c > a && c > b) {
      d = c;
    }
    printf("%d is the largest number.\n", d);
  } else {
    printf("Given three numbers are equal.\n");
  }

  return 0;
}