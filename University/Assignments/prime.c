#include <stdio.h>

int main() {
    int n=0,i=0,x=0,c=0;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");
    
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("The prime numbers in the array are:\n");

    for(i=0;i<n;i++) {
        int f=0;
        
        for(x=1;x<=arr[i];x++) {
            if(arr[i]%x==0)
                f++;
        }

        if(f==2) {
            c++;
            printf("%d\n",arr[i]);
        }
    }

    if(c==0)
        printf("There are no prime numbers in the array.\n");

    return 0;
}