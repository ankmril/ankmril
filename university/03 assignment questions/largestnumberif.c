#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter three numbers to be checked for the largest one\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c) {
        goto end;
    }
    if(a>b&&a>c)
    printf("Largest value: %d",a);
    if(b>c&&b>a)
    printf("Largest value: %d",b);
    if(c>a&&c>b)
    printf("Largest value: %d",c);
    end:
    printf("Input values are equal. Try again.\n");
    return 0;
}