#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} Point;

typedef struct {
  Point topLeft;
  Point bottomRight;
} Rectangle;

int main() {
  Rectangle r1;

  r1.topLeft.x = 0;
  r1.topLeft.y = 10;

  r1.bottomRight.x = 10;
  r1.bottomRight.y = 0;

  int breadth = r1.bottomRight.x - r1.topLeft.x;
  int length = r1.topLeft.y - r1.bottomRight.y;

  float area;
  area = breadth * length;

  printf("Area: %.2f\n", area);

  return 0;
}