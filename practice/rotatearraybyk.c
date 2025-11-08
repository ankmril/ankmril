#include <stdio.h>
int main() {
    int n,i,k,a;
    
    printf("Enter the size of array\n");
    scanf("%d",&n);
    
    int arr[n],arr2[n];
    
    printf("Enter the elements of array\n");
    
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter the shift of array\n");
    scanf("%d",&k);
    
    k=k%n;
    
    printf("Enter 1 for left and 2 for right shift of array\n");
    scanf("%d",&a);
    
    for(i=0;i<n;i++)
        arr2[i]=arr[i];
    
    if(a==1) {
        for(i=0;i<n;i++)
            arr[i]=arr2[(i+k)%n];
    }
    else if(a==2) {
        for(i=0;i<n;i++)
            arr[i]=arr2[(i-k+n)%n];
    }
    else {
        printf("Invalid input. Try again.\n");
        return 0;
    }
    
    printf("Resultant array:\n");
    
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    
    return 0;
}
