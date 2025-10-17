#include <stdio.h>

int main() {
    int n,cp=0,cn=0,cz=0,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        if(arr[i]>0)
            cp++;
        if(arr[i]<0)
            cn++;
        if(arr[i]==0)
            cz++;
    }
    printf("Positive numbers: %d\nNegative numbers: %d\nZeros: %d",cp,cn,cz);
    return 0;
}