// bubble sort 
#include <stdio.h>
int main(){
    int arr[100],n,i,j,temp;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
    scanf("%d",arr[100]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[i]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("sorted array");
for(i=0;i<n;i++)
printf("%d",&arr[i]);
return 0;

}
