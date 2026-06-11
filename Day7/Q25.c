#include <stdio.h>
long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int  num;
    printf("enter a number: ");

    scanf("%d",&num);
    if(num<0){
        printf("factorial is not defined for negative numbers");
        return 0;
    }
    else{
        printf("factorial of %d = %lld", num, factorial(num));
        return 0;
    }
}