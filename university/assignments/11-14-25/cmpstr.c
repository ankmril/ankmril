#include <stdio.h>
#include <string.h>

int main() {
  char s1[100], s2[100];

  printf("\nEnter two strings:\n");
  scanf(" %s", &s1);
  scanf(" %s", &s2);

  int l1, l2;
  l1 = strlen(s1);
  l2 = strlen(s2);

  int diff = 0, check;

  if(l1 > l2) {
    check = l2;
  }
  else if(l1 < l2) {
    check = l1;
  }
  else if(l1 == l2) {
    check = l1;
  }

  for(int i = 0; i < check; i++) {
    if(s1[i] == s2[i]) {
      continue;
    }
    else if(s1[i] < s2[i]) {
      diff = s2[i] - s1[i];
      break;
    }
    else if(s2[i] < s1[i]) {
      diff = s1[i] - s2[i];
      break;
    }
  }

  printf("\nDifference: %d\n", diff);

  return 0;
}