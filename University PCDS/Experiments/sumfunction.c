#include <stdio.h>
int sum(int a, int b) {
    int s;
    s=a+b;
    return s;
}
int main() {
    int x,y,z;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    z=sum(x,y);
    printf("Sum: %d\n",z);
    return 0;
}