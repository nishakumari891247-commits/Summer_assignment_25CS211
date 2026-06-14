#include<stdio.h>
#include<limits.h>
int main(){
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[100];
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN ;
    int  second_largest=INT_MIN;
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    printf("largest element is %d\n", largest);
    printf("second largest element is %d\n", second_largest);
    return 0;
}
