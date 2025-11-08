#include <stdio.h>

int main() {
  float s1, s2, s3, s4, s5, total, avg;
  char grade;

  printf("enter the marks for 5 subjects:\n");
  scanf(" %f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
  
  total = s1 + s2 + s3 + s4 + s5;
  avg = total / 5.0;

  if(avg >= 90)
    grade = 'A';
  else if(avg >= 75)
    grade = 'B';
  else if(avg >= 60)
    grade = 'C';
  else if(avg >= 40)
    grade = 'D';
  else if(avg >= 30)
    grade = 'E';
  else
    grade = 'F';

  printf("\n------ grade sheet -------\n");
  printf("subject 1: %.2f\n", s1);
  printf("subject 2: %.2f\n", s2);
  printf("subject 3: %.2f\n", s3);
  printf("subject 4: %.2f\n", s4);
  printf("subject 5: %.2f\n", s5);
  printf("--------------------------\n");
  printf("total: %.2f\n", total);
  printf("average: %.2f\n", avg);
  printf("grade: %c\n", grade);

  return 0;
}