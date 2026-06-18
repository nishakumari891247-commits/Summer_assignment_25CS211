#include<stdio.h>
int main(){
    int i;
    int arr[]={1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("array after removing duplicates is: ");
    for(int i=0;i<n;i++){
        int isduplicate=0;
        for(int j=0;j<i;j++)
        if(arr[i]==arr[j]){
            isduplicate=1;
            break;
        }
        }
        int isduplicate;
        if(!isduplicate){
            printf("%d",arr[i]);
        }
        return 0;
        }
    
    