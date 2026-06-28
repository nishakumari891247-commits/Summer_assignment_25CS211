#include <stdio.h>
#include <string.h>

#define MAX 100

int accNo[MAX];
char name[MAX][50];
float balance[MAX];
int count = 0;

void createAccount()
{
    printf("Enter Account Number: ");
    scanf("%d", &accNo[count]);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance[count]);

    count++;

    printf("\nAccount Created Successfully!\n");
}

void displayAccounts()
{
    if (count == 0)
    {
        printf("\nNo Accounts Found!\n");
        return;
    }

    printf("\n========== ACCOUNT DETAILS ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Account No : %d\n", accNo[i]);
        printf("Name       : %s\n", name[i]);
        printf("Balance    : %.2f\n", balance[i]);
    }
}

void searchAccount()
{
    int no, found = 0;

    printf("Enter Account Number: ");
    scanf("%d", &no);

    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == no)
        {
            printf("\nAccount Found\n");
            printf("Account No : %d\n", accNo[i]);
            printf("Name       : %s\n", name[i]);
            printf("Balance    : %.2f\n", balance[i]);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nAccount Not Found!\n");
}

void depositMoney()
{
    int no, found = 0;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &no);

    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == no)
        {
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            balance[i] += amount;

            printf("\nAmount Deposited Successfully!\n");
            printf("Current Balance : %.2f\n", balance[i]);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nAccount Not Found!\n");
}

void withdrawMoney()
{
    int no, found = 0;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &no);

    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == no)
        {
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (amount > balance[i])
            {
                printf("\nInsufficient Balance!\n");
            }
            else
            {
                balance[i] -= amount;
                printf("\nAmount Withdrawn Successfully!\n");
                printf("Current Balance : %.2f\n", balance[i]);
            }

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nAccount Not Found!\n");
}

void deleteAccount()
{
    int no, found = 0;

    printf("Enter Account Number: ");
    scanf("%d", &no);

    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == no)
        {
            for (int j = i; j < count - 1; j++)
            {
                accNo[j] = accNo[j + 1];
                strcpy(name[j], name[j + 1]);
                balance[j] = balance[j + 1];
            }

            count--;

            printf("\nAccount Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nAccount Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== BANK MANAGEMENT SYSTEM ==========\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                searchAccount();
                break;

            case 4:
                depositMoney();
                break;

            case 5:
                withdrawMoney();
                break;

            case 6:
                deleteAccount();
                break;

            case 7:
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}