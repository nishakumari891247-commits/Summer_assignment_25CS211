#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
    int number, guess;
    srand(time(0));
    number = rand()%100+1;
    printf("==number guessing game==");
    printf("guess the  number from 1-10\n");
    do{
        printf("enter the your guess number:");
        scanf("%d",&guess);
        if(guess>number)
        printf("too high");
        else if(guess<number)
        printf("too low");
        else
        printf("congrates! you guessed the correct number");
    }
    while(guess!=number);
    return 0;

}