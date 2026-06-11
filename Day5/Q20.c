#include <stdio.h>
int main()
{
    int n,i,largestprime=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n%2==0){
        largestprime=2;
        n/=2;
    }
    for(i=3;i*i<=n;i+=2){
        while(n%i==0){
            largestprime=i;
            n/=i;
        }
    }
    if(n>2){
        largestprime=n;
    }
    printf("the largest prime factor is %d",largestprime);
    return 0;
}