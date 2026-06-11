#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter a number");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(n%i==0){
        sum+=i;
    }
  }  
  if(sum==n){
    printf("the number is a perfect number");
  }
  else{
    printf("the number is not a perfect number");
  }
  return 0;
}