#include <stdio.h>
int main()
{
    int num, ori,rem, result=0;
    printf("enter a number");
    scanf("%d",&num);
    ori=num;
    while(num!=0){
        rem=num%10;
        result+=rem*rem*rem*rem;
        num/=10;
    }
    if(result==ori){
        printf("the number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
        return 0;
    }


}