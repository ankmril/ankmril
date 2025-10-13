#include <stdio.h>
int main() {
    int n,a=0,b=1,c;
    printf("Enter the Fibonacci series limit\n");
    scanf("%d",&n);
    printf("The Fibonacci Series:\n");
    printf("%d\n%d\n",a,b);
    for(c=a+b;c<=n;c=a+b) {
       printf("%d\n",c);
       a=b;
       b=c;
    }
    return 0;
}