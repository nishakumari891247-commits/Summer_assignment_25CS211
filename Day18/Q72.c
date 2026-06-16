#include<stdio.h>
int main(){
    int arr[100],i,j,n,temp;
    printf("enter the number of elemrnts");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j]){
                temp=arr[j];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("array in descending order:\n");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;

}