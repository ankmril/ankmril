#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter two numbers to be swapped\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped Values:\nA: %d\nB: %d",a,b);
    return 0;
}