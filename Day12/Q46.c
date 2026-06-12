#include<stdio.h>
int armstrong(int n)
{
    int sum;
    int temp;
    int rem;

    while(temp>0)


{
    rem=temp%10;
    sum=sum+rem*rem;
    temp=temp/10;

}
return(sum==n);
}
int main(){
int num;
printf("enter a number");
scanf("%d",&num);
if(armstrong(num))
printf("%d is an armstrong number");
else
printf("%d is not an armstrong number");
return 0;
}
