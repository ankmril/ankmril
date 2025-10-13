#include <stdio.h>
int main() {
    float p,r,t,si,a;
    printf("Enter principal, rate of interest, and time period\n");
    scanf("%f%f%f",&p,&r,&t);
    si=((p*r*t)/100);
    a=p+si;
    printf("Results:\nSimple Interest: %f\nAmount: %f",si,a);
    return 0;
}