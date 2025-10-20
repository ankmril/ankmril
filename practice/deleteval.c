#include <stdio.h>
 
int main() {
    int n=0,i=0,val,pos;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter the value of the element to be deleted:\n");
    scanf("%d",&val);

    int found=0;

    for(i=0;i<n;i++) {
        if(arr[i]==val) {
            pos=i;
            found++;
            break;
        }
    }

    if(!found) {
        printf("The value not found in array.\n");
        return 0;
    }

    for(i=pos;i<n-1;i++)
        arr[i]=arr[i+1];

    printf("The new array:\n");

    for(i=0;i<n-1;i++)
        printf("%d ",arr[i]);

    return 0;
}