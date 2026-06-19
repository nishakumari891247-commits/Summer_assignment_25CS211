#include <stdio.h>
int main(){
    int a[10][10],b[10][10];
    int m,n,i,j;
    printf(" enter the row and cols:\n");
    scanf("%d%d",&m,&n);
    printf("enter the original matrix:\n");
    for(i=0; i<m ; i++)
    for(j=0; j<n; j++)
    scanf("%d", &a[i][j]);
    printf(" transpose of the matrix:\n");
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    printf("%d", a[j][i]);
    printf("\n");
    return 0;
}