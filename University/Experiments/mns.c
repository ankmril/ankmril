#include <stdio.h>

int main() {
    int r1,c1,r2,c2,i,j,sm,ss,n;
    printf("Enter the rows and columns of first matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and columns of second matrix:\n");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements of array:\n");
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==j) {
                if(arr[i]==arr[j]) {
                    sm+=arr[i];
                }
            }
        }
    }
    return 0;
}