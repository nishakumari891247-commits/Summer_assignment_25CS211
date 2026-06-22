#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int i,words= 1;
    printf("enter the sentence\n");
    fgets(str, sizeof(str), stdin );
    for(i=0; str[i] != '\0';i++){
        if(str[i] == ' ')
        words++;

    }
    printf(" number of word =%d\n", words);
    return 0;

}