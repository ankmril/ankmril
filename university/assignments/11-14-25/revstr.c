#include <stdio.h>
#include <string.h>

int main() {
  char input[100], rev[100];

  printf("\nEnter a string:\n");
  scanf(" %s", &input);

  int length;
  length = strlen(input);

  int down = length - 1;

  for(int i = 0; i < length; i++) {
    rev[i] = input[down];
    down--;
  }

  printf("\nResultant string: %s\n", rev);

  return 0;
}