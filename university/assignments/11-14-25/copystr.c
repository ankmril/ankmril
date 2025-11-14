#include <stdio.h>
#include <string.h>

int main() {
  char input[100], copy[100];

  printf("\nEnter the string:\n");
  scanf(" %s", &input);

  int length;
  length = strlen(input);

  for(int i = 0; i < length; i++) {
    copy[i] = input[i];
  }

  printf("\nCopied string: %s\n", copy);

  return 0;
}