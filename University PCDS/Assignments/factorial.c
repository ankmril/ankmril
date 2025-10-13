#include <stdio.h>
int main() {
    int n,i,p=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
        p*=i;
    printf("Factorial: %d\n",p);
    return 0;
}