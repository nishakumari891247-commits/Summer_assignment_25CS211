#include <stdio.h>
int main (){
    int a[10][10];
    int i,j,n,flag=1;
    printf("enter the order of the square matrix:\n");
    scanf("%d",&n);
    printf("enter the matrix elements:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[1][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]);{
            flag=0;
            break;
        }
    }
}
if(flag)
printf("symmatric matrix:\n");
else
printf("not a symmatric matrix:\n");
return 0;

}