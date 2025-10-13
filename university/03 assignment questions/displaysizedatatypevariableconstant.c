#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    double d;
    printf("Size of int data type: %zu bytes\n", sizeof(int));
    printf("Size of float data type: %zu bytes\n", sizeof(float));
    printf("Size of char data type: %zu bytes\n", sizeof(char));
    printf("Size of double data type: %zu bytes\n", sizeof(double));
    printf("\nSize of variable a (int): %zu bytes\n", sizeof(a));
    printf("Size of variable b (float): %zu bytes\n", sizeof(b));
    printf("Size of variable c (char): %zu bytes\n", sizeof(c));
    printf("Size of variable d (double): %zu bytes\n", sizeof(d));
    printf("\nSize of constant 10 (int): %zu bytes\n", sizeof(10));
    printf("Size of constant 10.5 (double): %zu bytes\n", sizeof(10.5));
    printf("Size of constant 'A' (char): %zu bytes\n", sizeof('A'));
    return 0;
}