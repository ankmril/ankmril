#include <stdio.h>

int main() {
  char chr;

  printf("enter character in lowercase:\n");
  scanf(" %c", &chr);

  switch(chr) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("vowel.\n");
    default:
      printf("consonant.\n");
  }
  
  return 0;
}