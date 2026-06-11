#include <stdio.h>
int main(){
    int num, sum=0, digit;
    printf("enter a nmuber");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("sum of the digit =%d",sum);
    return 0;
}