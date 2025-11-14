#include <stdio.h>
#include <string.h>

int main() {
  char s1[100], s2[100], s3[100];

  printf("\nEnter two strings:\n");
  scanf(" %s", &s1);
  scanf(" %s", &s2);

  int l1, l2; // length of strings
  l1 = strlen(s1);
  l2 = strlen(s2);

  int lfinal = l1 + l2; // final length

  for(int i = 0; i < l1; i++) { // first string
    s3[i] = s1[i];
  }

  int m = 0;

  for(int j = l1; j < lfinal; j++) { // second string
    s3[j] = s2[m];
    m++;
  }

  printf("\nThe resultant string: %s\n", s3);

  return 0;
}