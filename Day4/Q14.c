#include <stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n==1){
        printf("nth fibbonaci number is %d",a);

    }
    else if(n==2){
        printf("nth fibbonaci number is %d",b);
    }
    else{
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("nth fibbonaci number is %d",c);
    }
    
}