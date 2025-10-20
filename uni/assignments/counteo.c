#include <stdio.h>

int main() {
    int n=0,i=0,counte=0,counto=0;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n;i++) {
        if(arr[i]%2==0)
            counte++;
            
        if(arr[i]%2!=0)
            counto++;
    }

    printf("Even elements of array: %d\nOdd elements of array: %d",counte,counto);

    return 0;
}