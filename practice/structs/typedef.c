#include <stdio.h>
#include <stdlib.h>

typedef struct {
  float length;
  float breadth;
} Rectangle;

int main() {
  Rectangle r1;

  printf("\nEnter length and breadth of rectangle:\n");
  scanf(" %f %f", &r1.length, &r1.breadth);

  printf("Area: %.2f", r1.length * r1.breadth);

  return 0;
}