#include <stdio.h>
int main() {
    int ce=0,co=0,i=1;
    do {
        if(i%2==0)
            ce++;
        else
            co++;
        i++;
    } while(i<=100);
    printf("Number of even numbers: %d\nNumber of odd numbers: %d\n",ce,co);
    return 0;
}