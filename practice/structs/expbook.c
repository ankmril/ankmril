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
  int n;

  printf("\nEnter the number of books:\n");
  scanf(" %d", &n);
  getchar();

  Book books[n];
  
  printf("\nEnter the title and price of the books:\n");

  for(int i = 0; i < n; i++) {
    printf("Book %d title: ", i+1);
    fgets(books[i].title, sizeof(books[i].title), stdin);
    
    books[i].title[strcspn(books[i].title, "\n")] = 0; 

    printf("Book %d price: ", i+1); 
    scanf(" %f", &books[i].price);
    getchar();
  }

  Book *mostExpensiveBook = findMostExpensive(books, n);

  printf("\nResult:\n");
  printf("The most expensive book is \"%s\".\n", mostExpensiveBook->title);
  printf("Price: %.2f\n", mostExpensiveBook->price);

  return 0;
}