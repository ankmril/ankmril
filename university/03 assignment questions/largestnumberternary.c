#include <stdio.h>
int main() {
    int a,b,c,l;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    l=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The largest number is: %d\n",l);
    return 0;
}