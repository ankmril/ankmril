#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char title[50];
  float price;
} Book;

Book* findMostExpensive(Book *b, int size) {
  Book *winner = &b[0];

  for(int i = 1; i < size; i++) {
    if (b[i].price > winner->price) {
      winner = &b[i];
    } 
  }
  
  return winner;
}

int main() {
  Book books[3];
  
  strcpy(books[0].title, "Atomic Habits");
  strcpy(books[1].title, "Uzumaki");
  strcpy(books[2].title, "Bakemonogatari");

  books[0].price = 450;
  books[1].price = 700;
  books[2].price = 900;

  Book *mostExpensiveBook = findMostExpensive(books, 3);

  printf("\nResult:\n");
  printf("The most expensive book is \"%s\".\n", mostExpensiveBook->title);
  printf("Price: %.2f\n", mostExpensiveBook->price);

  return 0;
}