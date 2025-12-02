#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student { // declaring the struct before main function
  char name[50];
  int age;
  float gpa;
};

struct Point { // declare another struct for pointer
  int x;
  int y;
};

void printPoint(struct Point *p) { // refer to the call value here
  printf("X: %d\nY: %d\n", p->x, p->y); // use -> for pointer struct usage
}

int main() {
  struct Student s1; // declaring the struct inside the main function for use

  strcpy(s1.name, "Ankit Kumar Sandil"); // assigning strings in struct in c

  s1.age = 19; // assigning int and floats in structs in c
  s1.gpa = 7.5;

  printf("Name: %s\n", s1.name);
  printf("Age: %d\n", s1.age);
  printf("GPA: %.2f\n", s1.gpa);
 
  struct Student class_roster[30]; // structs also work with array excellently

  class_roster[0].gpa = 7.0;
  class_roster[0].age = 19;

  strcpy(class_roster[0].name, "A. Soumyaranjan Dora");

  printf("Name: %s\n", class_roster[0].name);
  printf("Age: %d\n", class_roster[0].age);
  printf("GPA: %.2f\n", class_roster[0].gpa);

  struct Point p1; // struct pointer declare inside main function

  p1.x = 10; // assigning values
  p1.y = 20;

  printPoint(&p1); // calling function with address reference

  return 0;
}