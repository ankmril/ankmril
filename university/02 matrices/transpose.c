#include <stdio.h>
int main() {
    int r,c,i,j;
    printf("Enter size of the matrix - rows and columns respectively\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Here's the transpose of the matrix\n");
    for(i=0;i<c;i++) {
        for(j=0;j<r;j++) {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}