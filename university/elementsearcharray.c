#include <stdio.h>
int main() {
    int n,s,pos,i;
    printf("Enter the number of elements to be stored in the array\n");
    scanf("%d",&n);
    printf("Enter the array values\n");
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched in the array\n");
    scanf("%d",&s);
    for(i=0;i<n;i++) {
        if(arr[i]==s) {
            pos=i+1;
            break;
        }
    }
    printf("Position: %d\n",pos);
    return 0;
}