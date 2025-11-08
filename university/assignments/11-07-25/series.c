#include <stdio.h>

int main() {
  int n = 0;
  float c = 3.0, sum = 0.0;

  printf("\nEnter value of n:\n");
  scanf(" %d", &n);

  printf("\nThe Series:\n");

  printf("%.2f", 1.0 / 1.0);

  for(int i = 2; i <= n; i++) {
    printf(" + %.2f", 1 / c);
    // sum += 1 / c; || FOR SUM
    c += 2;
  }

  printf("\n");

  // printf("\nSum: %.2f\n", sum); || FOR SUM

  return 0;
}