#include <stdio.h>
int main(){
    int a[]={10,20,30,40,50};
    int b[]={30,40,60,70};
    int n1=5,n2=4;
    int i,j;
    printf("common element");
    for(i=0;i<n1;i++){
    for(j=0;j<n2;j++)
    {
        if(a[i]==b[j]){
            printf("%d",a[i]);
        }
    }
}
return 0;
}