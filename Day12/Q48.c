#include<stdio.h>
int perfect(int n)
{
    int sum=0;
    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return(sum==n);
}
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    if(perfect(num)){
    printf("%d is a perfect number",num);}

    else
    {
    printf("%d is not a perfect number",num);
    }
    return 0;
}