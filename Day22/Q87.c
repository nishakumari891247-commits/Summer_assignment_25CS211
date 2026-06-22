#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,count =0;
    printf("enter a string\n");
    fgets(str , sizeof(str), stdin);
    printf("enter the character to find the frequency : ");
    scanf("%c",&ch);
    for(i=0; str[i]!='\0'; i++){
        if(str[i] == ch)
        count++;
    }
    printf("frequency of '%c' = %d\n", ch,count);
    return 0;
}