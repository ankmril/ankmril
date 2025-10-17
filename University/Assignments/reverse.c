#include <stdio.h>

int main() {
    int n=0,i=0;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("The array in reverse order:\n");
    for(i=n-1;i>=0;i--)
        printf("%d\n",arr[i]);

    return 0;
}