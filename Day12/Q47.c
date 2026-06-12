#include<stdio.h>
void fibonacci(int n)
{
    int a=0;
    int b=1;
int c;
int i;
printf("fibonacci series");
for(i=1;i<=n;i++){
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
}
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}