#include <stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,m,n,p,q,k;
    printf("enter the rows and cols of the first matrix :\n");
    scanf("%d%d",&m,&n);
    printf("enter the rows and cols of the of the second matrix:\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("multiplication not possible:\n");
        return 1;
    }
    printf("enter the first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
        scanf("%d", &a[i][j]);
    }
    }
    printf("enter the second matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++){
        scanf("%d", &b[i][j]);
    }
}
    for(i=0;i<m;i++){
    for(j=0;j<q;j++){
    c[i][j]=0;
    for(k=0;k<n;k++){
    c[i][j] +=a[i][k]*b[k][j];
    }
}
    }

    printf("the resultant matrix:\n");
    for(i=0;i<m;i++){
    for(j=0;j<q;j++){
    printf("%d\t", c[i][j]);
    }
    printf("\n");
    }
    return 0;
}