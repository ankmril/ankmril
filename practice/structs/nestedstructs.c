#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int day;
  int month;
  int year;
} Date;

typedef struct {
  char name[50];
  Date dob;
} Student;

int main() {
  Student s1;

  printf("\nEnter date of birth:\n");
  scanf(" %d", &s1.dob.year);

  printf("\nYear of birth: %d\n", s1.dob.year);

  return 0;
}