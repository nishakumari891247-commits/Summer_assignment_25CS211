#include<stdio.h>
int main(){
    int choice;
    float balance=10000, amount;
    printf("== ATM Stimulation ==\n");
    printf("1. check balance\n");
    printf("2. deposit\n");
    printf("3. withdraw\n");
    printf("3. exit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("current balance = %.2f\n",balance);
        break;
        case 2:
        printf("Enter the amount to deposit");
        scanf("%f",&amount);
        balance +=amount;
        printf("deposit successful");
        break;
        case 3:
        printf("Enter amount to withdraw");
        scanf("%f",&amount);
        if(amount <=balance){
        balance -= amount;
        printf("withdrawal successful");
        }
        else{
            printf("insufficient balance");
        }
        break ;
        case 4:
        printf("Thank you for using ATM");
        break;
        default:
        printf("invalid choice");

    }
    return 0;
}

