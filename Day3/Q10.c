#include <stdio.h>
int main()
{
    int start,end,i,j,isprime;
    printf("enter anumber");
    scanf("%d%d",&start,&end);
    printf("prime number between %d and %d are:",start,end);
    for(i=start;i<=end;i++){
        if(i<=1){
            continue;
            isprime=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
            if(isprime==1){
                printf("%d",i);
            }
            return 0;
        }
    }
}