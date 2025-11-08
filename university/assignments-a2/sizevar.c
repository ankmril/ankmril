#include <stdio.h>

int main() {
  int a;
  char ch;
  float fl;

  printf("enter the values of int, char, and float:\n");
  scanf(" %d %c %f", &a, &ch, &fl);

  printf("size of int: %zu bytes\n", sizeof(a));
  printf("size of char: %zu bytes\n", sizeof(ch));
  printf("size of float: %zu bytes\n", sizeof(fl));

  return 0;
}