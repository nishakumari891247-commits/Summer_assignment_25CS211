#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,r,c,sum;
    printf("enter rows and cols of the matrix");
    scanf("%d%d", &r,&c);
    printf("enter the elements of the matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("row wise sum:");
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
             sum +=a[i][j];
        }
        
        printf("%sum of rows =%d\n",i+1,sum);
    }
    return 0;

}