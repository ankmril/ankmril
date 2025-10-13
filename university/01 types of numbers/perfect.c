#include <stdio.h>
int main() {
    int n,i,s=0,m=1;
    printf("Enter a number to check whether it's perfect number or not\n");
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        if(n%i==0) {
            s+=i;
            m*=i;
        }
    }
    if(s==n&&m==n) {
        printf("The number is a perfect number.\n");
        return 0;
    }
    else {
        printf("The number is not a perfect number.\n");
        return 0;
    }
}