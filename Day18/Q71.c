#include <stdio.h>
int main(){
    int arr[100],n,key;
    int low,high,mid,flag;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter sorted elemnts");
    for(int i=0;i<n;i++)
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            flag=1;
            printf("enter found at position %d",mid+1);
            break;
        }
        else if(arr[mid]<key)
        low=mid+1;
        else
        high=mid-1;
    }
    if(!flag)
    printf("element not found");
    return 0;

}