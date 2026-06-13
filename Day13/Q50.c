#include <stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    float average;
    printf("enter number of element ");
    scanf("%d",&n);
    printf("enter the arraay");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];

    }
    average = (float)sum/n;
    printf("sum=%d",sum);
    printf("average =%2f",average);
    return 0;

    

}