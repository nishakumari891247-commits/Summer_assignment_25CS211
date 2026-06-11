#include <stdio.h>
int main()
{
    int num,original, digit, ,reverse=0;
    printf("enter a number");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    if(original==reverse){
        printf("the number is a palindrome");
    }
    else{
        printf("the number is not a palindrome");
    }
    return 0;
}



