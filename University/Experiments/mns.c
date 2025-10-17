#include <stdio.h>

int main() {
    int n,i,j,sm,ss;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
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