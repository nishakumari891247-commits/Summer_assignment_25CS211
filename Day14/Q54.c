#include<stdio.h>
int main(){
    int n,i,key,count=0;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to find the frequency");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key)
        count++;
    }
    printf("frequency of %d is %d",key,count);
    return 0;
}