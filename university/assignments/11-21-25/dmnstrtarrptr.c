#include <stdio.h>

int main() {
  char *input[] = {
    "Ankit",
    "Kumar",
    "Sandil"
  };

  int n = 3;

  for(int i = 0; i < n; i++) {
    printf("%s\n", input[i]);
  }

  return 0;
}