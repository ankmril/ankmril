#include <stdio.h>
int main() {
    int n,i,l1,l2;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    l1=arr[0],l2=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>=l1) {
            l2=l1;
            l1=arr[i];
        }
        else if(arr[i]>l2&&arr[i]<l1) 
            l2=arr[i];
    }
    printf("Largest element: %d\n",l1);
    if(l1==l2)
        printf("No distinct second largest element.\n");
    else
        printf("Second largest element: %d\n",l2);
    return 0;
}