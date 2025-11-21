#include <stdio.h>

int main() {
  char input[100];

  printf("\nEnter the string:\n");
  scanf(" %s", input);

  char *ptr = input;
  int len = 0;

  while(*ptr != '\0') {
    len++;
    ptr++;
  }

  printf("\nLength: %d\n", len);

  return 0;
}