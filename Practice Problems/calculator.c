#include <stdio.h>
float result(char chr, float a, float b) {

    float rs=0.0;
    if(chr=='/'&&b==0) {
        printf("Error: Division by zero not allowed.\n");
        return 0.0;
    }

    switch(chr) {
        case '+': rs=a+b; break;
        case '-': rs=a-b; break;
        case '*': rs=a*b; break;
        case '/': rs=a/b; break;
        default: printf("Invalid operator.\n");
            return 0.0;
    }

    return rs;
}

int main() {

    char chr;
    float a,b;
    int c;

    do {
        printf("Enter the operation (+, -, *, /)\n");
        scanf(" %c",&chr);
        printf("Enter the two numbers\n");
        scanf(" %f %f",&a,&b);
        printf("Result: %f\n",result(chr,a,b));
        printf("Do you want to perform another operation? (Enter 1 for yes and 2 for no.)\n");
        scanf("%d",&c);
        if(c!=1&&c!=2)
        printf("Invalid input.\n");
    } while(c==1);

    if(c==2)
        printf("Thanks for using the calculator.\n");
        
    return 0;
}