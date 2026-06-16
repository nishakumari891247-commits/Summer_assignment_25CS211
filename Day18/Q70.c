//selection sort
#include<stdio.h>
int main(){
    int arr[100],n,i,j,temp,mid;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        mid=i;
        for(j=i+1;j<n;j++){
        if(arr[j]<arr[mid])
        mid=j;
        }
        temp=arr[j];
        arr[i]=arr[mid];
        arr[mid]=temp;
    }
    printf("sorted array");
    for(i=0;i<n;i++)
    printf("%d",&arr[i]);
    return 0;

}