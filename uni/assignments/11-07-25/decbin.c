#include <stdio.h>
#include <math.h>

int main() {
  int number, choice;

  printf("\nEnter a number:\n");
  scanf(" %d", &number);

  printf("\nEnter type of conversion (1 for decimal to binary & 2 for binary to decimal):\n");
  scanf(" %d", &choice);

  switch(choice) {
    case 1:
      int bit = 0, binary = 0;
      while(number > 0) { // decimal to binary logic
        bit = number % 2;
        binary = binary * 10 + bit;
        number = number / 2;
      }
      printf("\nResult in binary: %d\n", binary);
      return 0;

    case 2:
      int pos = 0, digit = 0, decimal = 0;
      while(number > 0) { // binary to decimal logic
        digit = number % 10;
        decimal = decimal + digit * pow(2, pos);
        pos++;
        number = number / 10;
      }
      printf("\nResult in decimal: %d\n", decimal);
      return 0;

    default:
      printf("\nEnter valid choice.\n");
      return 0;
  }

  return 0;
}