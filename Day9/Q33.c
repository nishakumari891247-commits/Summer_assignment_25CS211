#include <stdio.h>
int main()
{
    int n;
    printf("enter a rows");
    scanf("%d",&n);
    for(int i=1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
