#include <stdio.h>
int main(){
    int n,a=0,b=1,c,i=1;
    printf("enter number of terms");
    scanf("%d",&n);
    printf("fibbonacci series: %d %d ", a, b);
    while(i<n-2){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
        i++;
    }
    return 0;
}