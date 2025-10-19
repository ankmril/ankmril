#include <stdio.h>

int main() {
    int n=0,i=0,j=0,t=0,temp=0;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter the type of sorting (1 for ascending, 2 for descending):\n");
    scanf("%d",&t);

    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            int condition=(t==1&&arr[i]>arr[j])||(t==2&&arr[i]<arr[j]);
            if (condition) {
                temp=arr[i];
                arr[j]=temp;
                arr[i]=arr[j];
            }
        }
    }

    printf("Sorted array:\n");

    for(i=0;i<n;i++) 
        printf("%d\n",arr[i]);
    
    return 0;
}