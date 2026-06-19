#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,m,n;
    printf("enter rows and cols:\n");
    scanf("%d%d",&m,&n);
    printf("enter the first matrix:\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d", &a[i][j]);
    printf("enter the second matrix:\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d", &b[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    c[i][j]=a[i][j] - b[i][j];
    printf("the resultant matrix:\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    printf("%d ", c[i][j]);
    printf("\n");
    return 0;
}