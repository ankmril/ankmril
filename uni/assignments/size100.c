#include <stdio.h>

int main() {
    int i=0,arr[100];

    printf("Enter the 100 elements of the array:\n");

    for(i=0;i<100;i++)
        scanf("%d",&arr[i]);

    printf("The array:\n");

    for(i=0;i<100;i++)
        printf("%d\n",arr[i]);

    return 0;
}