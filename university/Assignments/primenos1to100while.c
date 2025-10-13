#include <stdio.h>
int main() {
    int i=1;
    while(i<=100) {
        int f=0;
        for(int n=1;n<=i;n++) {
            if(i%n==0)
            f++;
        }
        if(f==2)
            printf("%d\n",i);
        i++;
    }
    return 0;
}