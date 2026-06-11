#include <stdio.h>
int main()
{
    int num, low,high,ori,rem,result=0;
    printf("enter lower limit ");
    scanf("%d",&low);
    printf("enter upper limit ");
    scanf("%d",&high);
    printf("armstrong number between %d and %d are:",low,high);
    for(num = low; num <= high; num++){
        ori=num;
        result=0;
        while(num!=0){
            rem=num%10;
            result+=rem*rem*rem*rem;
            num/=10;
        }
        if(result==ori){
            printf("%d ",ori);
        }
    }
    return 0;
}