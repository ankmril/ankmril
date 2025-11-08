#include <stdio.h>

int main() {
    int r1=0,c1=0,i=0,j=0,sm=0,ss=0;

    printf("Enter the rows and columns of first matrix:\n");
    scanf("%d%d",&r1,&c1);

    int arr[r1][c1];

    printf("Enter the elements of first matrix:\n");

    for(i=0;i<r1;i++) {
        for(j=0;j<c1;j++)
            scanf("%d",&arr[i][j]);
    }

    for(i=0;i<r1;i++) {
        for(j=0;j<c1;j++) {
            if(i==j)
                sm+=arr[i][j];
            if((i+j)==(r1-1))
                ss+=arr[i][j];
        }
    }

    printf("Sum of main diagonal elements: %d\n",sm);
    printf("Sum of secondary diagonal elements: %d\n",ss);

    return 0;
}