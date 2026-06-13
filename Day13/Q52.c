#include <stdio.h>
int main(){
    int arr[100],n,i;
    int even=0,odd=0;
    printf("enter the number of element ");
    scanf("%d", &n);
    printf(" entrer the array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    if(arr[i]%2==0)
    even++;
    else
    odd++;
    printf("element is even%d",even);
    printf("element is odd %d",odd);
    return 0;
}