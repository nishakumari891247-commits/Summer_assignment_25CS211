#include <stdio.h>

int main() {
    int choice;
    int pin = 1234, enteredPin;
    float balance = 10000.00;
    float deposit, withdraw;

    printf("=================================\n");
    printf("       ATM SIMULATION\n");
    printf("=================================\n");

    
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Invalid PIN! Access Denied.\n");
        return 0;
    }

    printf("\nLogin Successful!\n");

    do {
        printf("\n=================================\n");
        printf("          ATM MENU\n");
        printf("=================================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nCurrent Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &deposit);

                if(deposit > 0) {
                    balance += deposit;
                    printf("Deposit Successful!\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                } else {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &withdraw);

                if(withdraw <= 0) {
                    printf("Invalid Amount!\n");
                }
                else if(withdraw > balance) {
                    printf("Insufficient Balance!\n");
                }
                else {
                    balance -= withdraw;
                    printf("Please collect your cash.\n");
                    printf("Remaining Balance = Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using our ATM!\n");
                break;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}