#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  char name[50];
  long long regnum;
  char branch[50];
  char section[50];
};

int main() {
  struct Student s1;

  strcpy(s1.name, "Ankit Kumar Sandil");
  s1.regnum = 25110638;
  strcpy(s1.branch, "ECE");
  strcpy(s1.section, "A");

  printf("\n==== Student Details: ====\n");
  printf("Name: %s\n", s1.name);
  printf("Registration Number: %lld\n", s1.regnum);
  printf("Branch: %s (Sec %s)\n", s1.branch, s1.section);

  return 0;
}