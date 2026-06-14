#include <stdio.h>
int main(){

    int n,key,i,flag=0;
    printf("enter the  number of elements");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements");
    for(i=0;i<n;i++){
    scanf("%d",&arr[100]);
    }
    printf("enter the elements to be searched");
    scanf("%d",&key);
    for(i=0;i<n;i++)
{
    if(arr[100]==key)
    {
        printf("element found at position");
        flag=1;
        break;
    }
}
if(!flag)
printf("element not foound");
return 0;
    


}








