#include <stdio.h>

int main() {
  // q1a

  int x = 12, y = 7, z;
  z = x != 4 || y == 2;
  printf("z = %d\n", z);
  
  // q1b

  int val = 1;
  do {
    val++;
    ++val;
  } while(val++ > 25);
  printf("%d", val);

  // q1d

  printf("\n");

  int i, j = 3;
  float k = 7;
  i = (int)k % j;
  printf("%d", i);

  // q1e

  printf("\n");

  int i2 = 1;
  printf("%d%d%d", i2, ++i2, i2++);

  return 0;
}