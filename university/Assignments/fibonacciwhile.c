#include <stdio.h>
int main() {
    int n,a=0,b=1,c;
    printf("Enter the Fibonacci series limit\n");
    scanf("%d",&n);
    printf("The Fibonacci Series:\n");
    printf("%d\n",a);
    printf("%d\n",b);
    c=a+b;
    while(c<n) {
       printf("%d\n",c);
       a=b;
       b=c;
       c=a+b;
    }
    return 0;
}