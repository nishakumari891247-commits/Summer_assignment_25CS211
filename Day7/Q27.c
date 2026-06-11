#include <stdio.h>
//recursive function to find sum of digits
int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sumOfDigits(n/10);
    }
}
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("sum of digits of %d is %d", num, sumOfDigits(num));
    return 0;
}

