#include <stdio.h>
#include <string.h>

int main() {
  char s1[100], s2[100];
  int i;

  printf("\nEnter the two strings:\n");
  fgets(s1, sizeof(s1), stdin);
  fgets(s2, sizeof(s2), stdin);

  s1[strcspn(s1, "\n")] = '\0';
  s2[strcspn(s2, "\n")] = '\0';

  for (i = 0; s2[i] != '\0'; i++) {
    s1[i] = s2[i];
  }

  s1[i] = '\0';

  printf("\nCopied string stored in s1 = %s\n", s1);

  return 0;
}