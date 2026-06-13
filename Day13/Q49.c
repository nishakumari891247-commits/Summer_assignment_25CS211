#include <stdio.h>
int main(){
    int arr[100],n,i;
    printf("enter number of element ");
    scanf("%d",&n);
    printf("enter array element ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array element are:/n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
return 0;
}