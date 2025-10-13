#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Results:\nAND = %d\nnOR = %d\nnXOR = %d\nNOT(a) = %d\nNOT(b) = %d\nLEFT(a<<1) = %d\nRIGHT(b>>1) = %d\n",a&b,a|b,a^b,~a,~b,a<<1,b>>1);
    return 0;
}