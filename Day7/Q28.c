#include <stdio.h>
int reversenumber(int n, int rev){
    if(n==0){
        return rev;
    }
    else{
        rev=rev*10+n%10;
        return reversenumber(n/10, rev);
    }
}
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num<0)
    num=-num;
    printf("reversed number is %d", reversenumber(num, 0));
    return 0;
}
