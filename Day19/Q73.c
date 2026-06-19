#include <stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int m,n,i,j;
    printf("enter the dimension of the matrix");
    printf("\nenter rows: ");
    scanf("%d",&m);
    printf("\nenter cols: ");
    scanf("%d",&n);
    printf("enter the first matrix:\n ");
    for(i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("enter the second matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the resultant matrix:\n ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&c[i][j]);
        }
        printf("\n");
    }
    return 0;
}