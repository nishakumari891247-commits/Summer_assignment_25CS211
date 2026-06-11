#include <stdio.h>
int factorial(int n){
    int fact =1;
      for(int i=1;i<=n;i++){
        fact=fact*i;
      }
      return fact;

}
int main()
{
    int n, temp, digit, sum=0;
    printf("enter anumber");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digit=temp%10;
        sum+=factorial(digit);
        temp/=10;
    }
    if(sum==n){
        printf("the number is a strong number");
    }
    else{
        printf("the number is not a strong number");
    }
    return 0;
}
    
