#include <stdio.h>
#define max 100

int stack[max];
int top = -1;

void push(int value) {
  if(top == max - 1) {
    printf("Stack overflow: cannot push.\n");
  } else {
    top++;
    stack[top] = value;
    printf("%d pushed into stack.\n", value);
  }
}

void pop() {
  if(top == -1) {
    printf("Stack underflow: stack is empty.\n");
  } else {
    printf("%d popped from stack.\n", stack[top]);
    top--;
  }
}

void display() {
  if(top == -1) {
    printf("Stack is empty.\n");
  } else {
    printf("Stack elements are:\n");
    for(int i = top; i >= 0; i--) {
      printf("%d\n", stack[i]);
    }
  }
}

int main() {
  int choice, value;

  while(1) {
    printf("\n==== Stack Menu ====\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("\nEnter your choice:\n");
    scanf(" %d", &choice);

    switch(choice) {
      case 1:
        printf("Enter value to push:\n");
        scanf(" %d", &value);
        push(value);
        break;
      
      case 2:
        pop();
        break;
      
      case 3:
        display();
        break;

      case 4:
        printf("Exiting program.\n");
        return 0;
      
      default:
        printf("Invalid choice: try again.\n");
        break;
    }
  }

  return 0;
}