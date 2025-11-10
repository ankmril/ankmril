#include <stdio.h>
#include <string.h>

int main() {
  char name[100], rev[100];
  int len, i;

  printf("\nEnter your full name:\n");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  len = strlen(name);

  for (i = 0; i < len; i++) {
    rev[i] = name[len - i - 1];
  }

  rev[len] = '\0';

  printf("\nReversed name: %s\n", rev);

  return 0;
}