#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

struct Employee {
  int id;
  char name[50];
  int age;
  float salary;
};

int main() {
  struct Employee emp[N];
  int i;

  printf("\nEnter details for %d employees:\n", N);

  for(i = 0; i < N; i++) {
    printf("\nEmployee %d:\n", i + 1);

    printf("ID: ");
    scanf(" %d", &emp[i].id);

    printf("Name: ");
    scanf(" %s", emp[i].name);

    printf("Age: ");
    scanf(" %d", &emp[i].age);

    printf("Salary: ");
    scanf(" %f", &emp[i].salary);
  }

  printf("\n\n==== Employee Details ====\n");

  for(i = 0; i < N; i++) {
    printf("Employee %d:\n", emp[i].id);
    printf("ID: %d\n", emp[i].id);
    printf("Name: %s\n", emp[i].name);
    printf("Age: %d\n", emp[i].age);
    printf("Salary: %.2f\n", emp[i].salary);
  }

  return 0;
}