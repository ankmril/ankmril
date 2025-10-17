#include <stdio.h>

int main() {
    int n=0,i=0,target=0,pos=0,c=0;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter the element to be searched in the array:\n");
    scanf("%d",&target);

    for(i=0;i<n;i++) {
        if(arr[i]==target) {
            c++;
            pos=i;
            break;
        }
    }

    if(c==1)
        printf("Element: %d\nPosition: %d\n",arr[pos],pos+1);

    return 0;
}