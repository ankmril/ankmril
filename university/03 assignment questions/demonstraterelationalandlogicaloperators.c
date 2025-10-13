#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    // Relational Operators
    printf("Relational Operators:\n");
    if(a==b)
        printf("Both numbers are equal.\n");
    if(a!=b)
        printf("Both numbers are not equal.\n");
    if(a>b)
        printf("First number is greater than second number.\n");
    if(a>=b)
        printf("First number is greater than or equal to second number.\n");
    if(a<b)
        printf("First number is less than second number.\n");
    if(a<=b)
        printf("First number is less than or equal to second number.\n");
    // Logical Operators
    printf("Logical Operators:\n");
    if(a>0&&b>0)
        printf("Both numbers are positive.\n");
    else
        printf("At least one number is not positive.\n");
    if(a>0||b>0)
        printf("Either number is positive.\n");
    else
        printf("Both numbers are not positive.\n");
    if(!(a=b))
        printf("Both numbers are not equal.\n");
    else
        printf("Both numbers are equal.\n");
    return 0;
}