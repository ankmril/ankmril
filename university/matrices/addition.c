#include <stdio.h>
int main() {
    int r1,c1,r2,c2,i,j;
    printf("Enter the rows and columns of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and columns of second matrix\n");
    scanf("%d%d",&r2,&c2);
    if(r1==r2&&c1==c2) {
        int a[r1][c1], b[r2][c2], c[r1][c2];
        printf("Enter the elements of the first matrix\n");
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix\n");
        for(i=0;i<r2;i++) {
            for(j=0;j<c2;j++) {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("Here's the resultant matrix after addition of both the input matrices:\n");
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Matrix addition isn't possible because the values you've entered for the two matrices aren't in such a way that they satisfy the condition required for the addition of two matrices where the number of rows and columns of the first matrix are equal to the number of rows and columns of the second matrix respectively.");
    }
    return 0;
}
