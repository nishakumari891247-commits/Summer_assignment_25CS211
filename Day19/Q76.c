#include <stdio.h>
int main(){
    int a[10][10];
    int i,j,n,s1=0,s2=0;
    printf("enter order of the matrix:\n");
    scanf("%d", &n);
    printf("enter the matrix:\n");
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    scanf("%d", &a[i][j]);
    }
}
    for(i=0;i<n;i++)
    {
        s1+= a[i][i];
        s2+= a[i][n - i - 1];
    }
    printf("sum of 1st digonal =%d\n",s1);
    printf("sum of the 2nd diagonal =%d\n",s2);
    return 0;


}