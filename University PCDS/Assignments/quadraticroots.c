#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,d,r1,r2,rl,img;
    printf("Enter coefficients:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0) {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n",r1);
        printf("Root 2 = %.2lf\n",r2);
    } 
    else if (d==0) {
        r1=r2=-b/(2*a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", r1);
    } 
    else {
        rl=-b/(2*a);
        img=sqrt(-d)/(2*a);
        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n",rl,img);
        printf("Root 2 = %.2lf - %.2lfi\n",rl,img);
    }
    return 0;
}