#include <stdio.h>
#include <string.h>

int main() {
  char input[100];

  printf("\nEnter a string:\n");
  fgets(input, sizeof(input), stdin);

  int length;
  length = strlen(input);
  
  int count = 0;

  for(int i = 0; i < length; i++) {
    if(input[i] == ' ') {
      count++;
    }
  }

  int final; // spaces + 1 equals number of words
  final = count + 1;

  printf("\nNumber of words: %d\n", final);

  return 0;
}