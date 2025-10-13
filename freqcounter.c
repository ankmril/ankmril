#include <stdio.h>
int main() {
    int n,i,j,k,c,val,dp;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++) {
        val=arr[i];
        dp=0;
        for(j=0;j<i;j++) {
            if(val==arr[j]) {
                dp=1;
                break;
            }
        }
        if(dp)
            continue;
        c=0;
        for(k=0;k<n;k++) {
            if(arr[k]==val)
                c++;
        }
        printf("Frequency of %d: %d\n",val,c);
    }
    return 0;
}