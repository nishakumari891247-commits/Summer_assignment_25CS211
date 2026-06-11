#include <stdio.h>
int main()
{
    int n ,count=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0){
        if(n%2==1){
            count++;
        }
        n/=2;
    }
    printf("number of 1s in binary representation: %d", count);
    return 0;
}