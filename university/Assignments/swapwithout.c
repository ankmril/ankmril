#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers to be swapped\n");
    scanf("%d%d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("Swapped Values:\nA: %d\nB: %d",a,b);
    return 0;
}