#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,r,c,sum;
    printf("enter the rows and cols of the matrix:");
    scanf("%d%d", &r,&c);
    printf("enter the elements of the matrix:\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("column wise sum:\n");
    for(i=0;i<c;i++){
        sum=0;
        for(j=0;j<r;j++){
         sum +=a[i][j];
        }
        printf("sum of the column %d =%d\n",j+1,sum);
    }
    return 0;
}