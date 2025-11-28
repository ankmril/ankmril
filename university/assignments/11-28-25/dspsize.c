#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  char name[50];
  int roll;
  float marks;
};

int main() {
  struct Student s1;

  strcpy(s1.name, "Ankit Kumar Sandil");
  s1.roll = 25110638;
  s1.marks = 397.00;

  printf("Size of structure: %zu bytes", sizeof(struct Student));

  return 0;
}