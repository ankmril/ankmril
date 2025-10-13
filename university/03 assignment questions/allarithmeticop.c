#include <stdio.h>
int main() {
    int a,b,add,sub,pro,div,mod;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    pro=a*b;
    div=a/b;
    mod=a%b;
    printf("Results:\nAddition: %d\nSubtraction: %d\nMultiplication: %d\nDivison: %d\nModulus Division: %d",add,sub,pro,div,mod);
    return 0;
}