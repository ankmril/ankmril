#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
  float length;
  float breadth;
};

float calculateArea(struct Rectangle *r) {
  float area;
  area = r->length * r->breadth;
  return area;
}

int main() {
  struct Rectangle r1;

  printf("\nEnter length and breadth of rectangle:\n");
  scanf(" %f %f", &r1.length, &r1.breadth);

  printf("Area: %.2f", calculateArea(&r1));

  return 0;
}