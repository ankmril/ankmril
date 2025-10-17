#include <stdio.h>

int main() {
    int n=0,i=0,sum=0;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");
    
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        sum+=arr[i];
    
    printf("Sum of elements of array: %d\n",sum);

    return 0;
}