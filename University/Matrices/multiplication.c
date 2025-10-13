#include <stdio.h>
int main() {
    int r1,c1,r2,c2,i,j,k;
    printf("Enter the number of rows and columns of the first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and columns of the second matrix\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2) {
        printf("Matrix multiplication isn't possible because the number of rows of the second matrix isn't equal to the number of columns of the first matrix which is the condition necessary for the multiplication of two matrices.");
        return 0;
    }
    int a[r1][c1],b[r2][c2],c[r1][c2];
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
        for(j=0;j<c2;j++) {
            c[i][j]=0;
            for(k=0;k<c1;k++) {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The resultant matrix after multiplication:\n");
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}