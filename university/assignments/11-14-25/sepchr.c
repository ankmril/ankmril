#include <stdio.h>
#include <string.h>

int main() {
  char input[100], sep[100];

  printf("\nEnter a string:\n");
  scanf(" %s", &input);

  int length;
  length = strlen(input);

  int final = length * 2 - 1; // resultant string length 
  
  int place = 0;

  for(int i = 0; i < final; i++) {
    if(i % 2 == 0) { // assign characters at even places from original string
      sep[i] = input[place];
      place++;
    }
    else { // add spaces at odd places
      sep[i] = ' ';
    }
  }

  printf("\nSeparated string: %s\n", sep);

  return 0;
}