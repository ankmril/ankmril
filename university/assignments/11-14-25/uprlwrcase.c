#include <stdio.h>
#include <string.h>

int main() {
  char input[100];
  char chr;

  printf("\nEnter the string:\n");
  scanf(" %s", &input);

  int length;
  length = strlen(input);

  for(int i = 0; i < length; i++) {
    chr = input[i];
    if(chr >= 65 && chr <= 90) { // upper case to lower case
      chr += 32;
    }
    else if(chr >= 97 && chr <= 122) { // lower case to upper case
      chr -= 32;
    }
    input[i] = chr;
  }

  printf("\nThe resultant string: %s", input);

  return 0;
}