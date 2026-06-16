#include<stdio.h>
int main(){
    int a[]={1,2,3,4};
    int b[]={3,4,5,6};
    int n1=4,n2=4;
    int unionArr[20];
    int i,j,k=0,found;
    for(i=0;i<n1;i++)
    unionArr[k++]=a[i];
    for(i=0;i<n2;i++)
    {
        found = 0;

    }
    for(j=0;j<k;j++)
    {
        if(b[i]==unionArr[j])
        {
            found=1;
            break ;
        }
    }
    {
    if(!found)
    unionArr[k++]=b[i];
    }
    printf("union");
    for(i=0;i<k;i++)
    printf("%d",unionArr[i]);
    return 0;

}