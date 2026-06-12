#include<stdio.h>
int palindrome(int n)
{
    int temp=n;
    int rev=0;
    int rem;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return (temp==rev);
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(palindrome(num))
    printf("palindrome number");
    else
printf("not palindrome number");
return 0;
}